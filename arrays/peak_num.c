#include<stdio.h>
int evensum(int arr[],int size)
{   
    for (int i= 0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    int peak = arr[0];
    
    // for (int i = 1 ;i<size;i++)
    int i = 1;
    
    for (int j = 2 ;j<=size;j++)
    {
        if (arr[i]>arr[j]&&arr[i-1]<arr[i])
        {
            if (arr[i]>peak)
            {
            peak = arr[i];
            }
        }
        i++;
    }
    
            printf("%d",peak);

}
    // printf("%d ",arr[i]);
   

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
    
    evensum(arr,size);
}