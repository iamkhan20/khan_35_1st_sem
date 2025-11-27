#include<stdio.h>
int main()
{
    int arr[50],ele=0,size;
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
    printf("Enter an element to search : \n");
    scanf("%d",&ele);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==ele)
        {
            printf("Element %d found at position %d\n",ele,i+1);
            break;
        }
    }

}    