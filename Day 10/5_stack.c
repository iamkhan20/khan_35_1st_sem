#include<stdio.h>
int stack[100], top = -1;
void push();
void pop();
void display();
int main()
{
    int ch;
    while(1)
    {
        int ch;
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: return 0;

            default: printf("Invalid choice\n");
        }
    }
}  
    void push()
    {
        int val;
        printf("Enter a number to be pushed: ");
        scanf("%d", &val);
        top++;
        stack[top] = val;
        printf("%d pushed to stack\n", val);
    }
    void pop()
    {
        if(top == -1)
        {
            printf("Stack underflow\n");
        }
        else
        {
            printf("%d popped from stack\n", stack[top]);
            top--;
        }
    }
    void display()
    {
        if(top == -1)
        {
            printf("Stack is empty\n");
        }
        else
        {
            printf("Stack elements: ");
            for(int i = top; i >= 0; i--)
            {
                printf("%d ", stack[i]);
            }
            printf("\n");
        }
    }  