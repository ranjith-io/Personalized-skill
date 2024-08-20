#include<stdio.h>
int printpos(int arr[],int size)
{   
    for (int i= 0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    // for (int i = 0 ;i<size;i++)
    // {
    //     int temp;
    //     for (int j = i+1;j<size;j++)
    //     {
    //     if(arr[j]<arr[i])
    //     {
    //         temp = arr[i];
    //         arr[i]=arr[j];
    //         arr[j]=temp;
    //     }
    // }
    
    // }
    // for (int i= 0;i<size;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");
    
    if (size%2==0)
    {
        int med = (arr[(size/2)-1]+(arr[size/2]))/2;
        printf("%d",med);
    }
    else 
    printf("%d",arr[size/2]);
    
    
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