// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int arr[7]={2009,598,9,2,78};
    int len= sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",len);

    int max=arr[0];
    
    for (int i = 0 ;i<len;i++)
    {
        // printf("%d ",arr[i]);
        if(arr[i]>max){
        max=arr[i];
        }
        
    }
    printf("\n%d ",max);
    
    
    
    
   

    return 0;
}