// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int arr[6]={2,598,1,9,2,78};
    int len= sizeof(arr)/sizeof(arr[0]);
    // printf("%d\n",len);

    int max=arr[0];
    int min=arr[0];
   
    
    for (int i = 0 ;i<len;i++)
    {
        
        if(arr[i]>max){
        max=arr[i];
        }
        
        if (arr[i]<min)
        {
        min=arr[i];
        }
        
    }
    int dif = max-min;
    printf("%d",dif);
    printf("\n%d",max);
    printf("\n%d",min);
    return 0;
}