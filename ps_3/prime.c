#include<stdio.h>
int evensum(int arr[],int size)
{   
    // int sum=0;
    for (int i = 0 ;i<size;i++)
    {
        int k = arr[i];
        // printf("%dk",k);
        for (int j =2;j*j<=k;j++)
        {
            if (k%j!=0)
            
            printf("%dh\n",k);
            
        }
    // printf("%d",sum);
    
}
}
int main()
{
    int arr[]={2,3,4,5,6};
    int size =5;
    
    evensum(arr,size);
}