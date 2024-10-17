// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int arr[6]={1,2,3,4,5,6};
    
    int length = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0;i<length;i++)
    {
        arr[i]=arr[i]*arr[i];
        printf("%d ",arr[i]);
    }
    
    
   

    return 0;
}