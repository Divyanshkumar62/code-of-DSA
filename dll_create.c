#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node*prev;
    struct node*next;
}*first = NULL;

void create(int A[],int size)
{
    struct node *temp,*last;
    first = (struct node*)malloc(sizeof(struct node));
    first->data = A[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;

    for(int i = 1;i<size;i++)
    {
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = A[i];
        temp->next = NULL;
        temp->prev = last;
        last->next = temp;
        last =temp;
    }
}

int count(struct node *p)
{
    int count = 0;
    while(p!=NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
}

int main()
{
    int a[] = {10,20,30,40,50};
    int size = sizeof(a) / sizeof(a[0]);
    create(a,size);
    display(first);
    int temp = count(first);

    printf("\n%d\n",temp);
}