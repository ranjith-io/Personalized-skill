#include<stdio.h>

int evensum(int arr[],int size)
{   
    for (int i= 0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    // int sum=0;
    for (int i = 0 ;i<size;i++)
    {
        int k = arr[i];
        if (arr[i]==3)
        {
            printf("%d",arr[i]);
            break;
        }


        
        for (int j = 2;j*j<=k;j++)
        {
            if (k%j==0){
            break;
            }
            else {
            printf("%d ",arr[i]);
            break;
            }
            
            
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
    
    evensum(arr,size);
}
