#include<stdio.h>
int evensum(int arr[],int size)
{   
    // int sum=0;
    for (int i = 0 ;i<size;i++)
    {
        int k = arr[i];
        printf("%dk",k);
        for (int j =2;j*j<=k;j++)
        {
            if (k%j!=0)
            
            printf("%dh",k);
            
        }
    // printf("%d",sum);
    return 0;
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
    
    evensum(arr,size);
}