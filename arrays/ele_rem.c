#include<stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    
    for (int i = 0 ;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int num;
    printf("Enter the num");
    scanf("%d",&num);
    
    for (int j = 0 ;j<size;j++)
    {
        if (j!=num)
        {
         printf("%d ",arr[j]); 
        }
    }
    // printf("%d",count);
    
}