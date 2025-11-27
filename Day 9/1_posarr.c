#include<stdio.h>
int main()
{
    int arr[50],pos,ele=0,size;
    printf("Enter size of array: \n");
    scanf("%d",&size);
    if(size>50 || size<=0)
    {
        printf("Invalid Size\n");
        return 0;
    }
    else
    {
        printf("Enter the elements of array: \n");
        for(int i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
    }
    printf("Enter an element to insert : \n");
    scanf("%d",&ele);
    printf("Enter the position to insert the element : \n");
    scanf("%d",&pos);
    for(int i=size-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
    size++;
    printf("Array after insertion is: \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}