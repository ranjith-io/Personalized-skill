#include<stdio.h>
int printpos(int arr[],int size)
{   
    for (int i= 0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    for (int i = 0 ;i<size;i++)
    {
        if (arr[i]>=0)
        {
            printf("%d ",arr[i]);
        }
    }
    
    
    
}
   

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    
    for (int i = 0 ;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    // printf("%d",arr[size]);
    
    printpos(arr,size);
}