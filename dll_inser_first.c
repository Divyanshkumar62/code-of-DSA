#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
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

void insert_first(struct node *first,int x)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    if(first == NULL)
    {
        temp->prev = NULL;
        temp->next = NULL;
        temp->data = x;
    }
    else {
    temp->prev = NULL;
    temp->next = first;
    first->prev = temp;
    first = temp;
    }
}
// void insert_last(struct node *first,int x)
// {
//    struct node *temp;
//    temp = (struct node *)malloc(sizeof(struct node));
//    temp->data = x;
//    temp->prev = NULL;
//    temp->next = NULL;
//    while(first->next!=NULL)
//    {
//      first = first->next;
//    }
//    temp->prev = first;
//    first->next = temp;
// }

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
void insert_any(struct node *first,int pos,int data)
{
   for(int i = 0;i<pos-1 && count(first);i++)
   {
       
   }
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
    int a[] = {10,20,30,40,50 };
    int size = sizeof(a) / sizeof(a[0]);
    create(a,size);
    display(first);
    printf("\n");
    insert(first,17);
    // insert_last(first,17);
    display(first);
    printf("\ncount is : %d",count(first));
}