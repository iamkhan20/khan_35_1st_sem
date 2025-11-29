#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next,*prev;
};
struct Node *head,*newnode,*tail;
int main()
{
    head=0;
    int ch=1;
    while(ch)
    {
        newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter a number : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        newnode->next=head;
        head->prev=tail;
        printf("Do you want to continue (0,1): \n");
        scanf("%d",&ch);
    }
    printf("Element :  \n");
    tail=head;
    while(tail->next!=head)
    {
        printf("%d ",tail->data);
        tail=tail->next;
    }
    printf("%d ",tail->data);
    printf("\n");
    return 0;
}