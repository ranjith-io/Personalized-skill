#include<stdio.h>
int printpos(int arr[],int size)
{   
    for (int i= 0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    int i = 0 ,j=1;
    
    
    
    int sum1= arr[i]+arr[size-1];
    int sum2 = arr[i+1]+arr[size-2];
    printf("%d %d ",sum1,sum2);
    
    
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