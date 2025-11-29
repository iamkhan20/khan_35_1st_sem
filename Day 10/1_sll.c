#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node *head,*newnode,*curr;
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
            head=curr=newnode;
        }
        else
        {
            curr->next=newnode;
            curr=newnode;
        }
        printf("Do you want to continue (0,1): \n");
        scanf("%d",&ch);
    }
    curr=head;
    printf("The linked list is:\n");
    while(curr!=NULL)
    {
        printf("%d ",curr->data);
        curr=curr->next;
    }
    printf("NULL \n");
    return 0;
}