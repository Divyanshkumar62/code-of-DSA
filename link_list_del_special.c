#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *first = NULL;

void create(int a[],int size)
{
    struct Node *t,*last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = a[0];
    first->next = NULL;
    last = first;

    for(int i = 1;i<size;i++)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}



int count(struct Node *p)
{
    int count = 0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}

// int delete_last(struct Node *p)
// {
//     int *q = NULL;
//     while(p->next!=NULL)
//     {
//         q = p;
//         int x = p->data;
//     }
// }



void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
}
int main()
{
    int a[] = {1,2,3,4,5};
    int size = sizeof(a) / sizeof(a[0]);
    create(a,size);
    display(first);
    printf("\n");
    // int t = delete_first(&first);/
    // int t = delete(3);
    display(first);
    printf("\n");
    // printf("%d",t);
}