// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int arr[5]={1,2,3,4,9};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int num;
    scanf("%d",&num);
    
    printf("Original array : ");
    for (int i =0 ;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    for (int i = 0 ; i<num;i++)
    {
        int j, last ;
        
        last = arr[size-1];
        for (j = size - 1 ;j >0;j--)
        {
            arr[j]= arr[j-1];
        }
        
        arr[0]=last;
    }
    
    printf("New array after %d rotation : ",num);
    for (int i =0 ;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}