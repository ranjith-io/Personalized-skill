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
        int temp;
        for (int j = i+1;j<size;j++)
        {
        if(arr[j]<arr[i]) //< >
        {
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    }
    for (int i= 0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    
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