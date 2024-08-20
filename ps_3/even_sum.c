#include<stdio.h>

int evensum(int arr[],int size)
{   
    int sum=0;
    for (int i = 0 ;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    return 0;
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
    
    evensum(arr,size);
}