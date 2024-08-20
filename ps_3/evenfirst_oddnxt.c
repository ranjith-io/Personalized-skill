#include<stdio.h>
int printpos(int arr[],int size)
{   
    int temp;
    
    for (int i = 0 ;i<size;i++)
    {
        for (int j =i+1 ;j<size;j++)
        {
            if (arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n");
    for (int i= 0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    
    for (int i = 0 ;i<size;i++)
    {
        if (arr[i]%2==0)
        printf("%d ",arr[i]);
    }
   
    for (int i = 0 ;i<size;i++)
    {
        if (arr[i]%2!=0)
        printf("%d ",arr[i]);
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
    for (int i= 0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    // printf("\n");
    
    printpos(arr,size);
}