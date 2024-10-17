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
        int j, first ;
    
        first = arr[0];
    for (j = 0 ;j <size;j++)
    {
        arr[j]= arr[j+1];
    }
    
    arr[size-1]=first;
    }
    
    printf("New array after n rotation : ");
    for (int i =0 ;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}