#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int arrsort(int arr[],int size)
{
    int num1,num2;
    int close= INT_MAX;
    for(int i =0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(abs(arr[i]+arr[j])<abs(close))
            {
                num1=arr[i];
                num2=arr[j];
               
                
                close=arr[i]+arr[j];
            }
        }
    }
    printf("%d ",num1);
    printf("%d ",num2);

    printf("%d ",close);
   
    
}
int main() {
   
    int arr[] = {0, 2, -4, -3, 9, 8};
    int size = 6;
    
    arrsort(arr, size);
    
    return 0;

}