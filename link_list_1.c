#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head = NULL;

void display(struct node*p)
{
    while(p!=NULL)
    {
        printf("%d",p->data);
        p = p->next;
    }
}

int main()
{
    
}