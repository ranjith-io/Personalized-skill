#include <stdio.h>

int arradd(int arr[],int size)
{
    int add=0;
    
    int  sum[size];
    int j =size-1;
    
    for ( int i =0;i<(size/2);i++)
    {
        
        
        sum[i]=arr[i]+arr[j];
        
        j--;
        
        
    }
    
    for(int i=0;i<size/2;i++)
    {
        printf("%d ",sum[i]);
        add+=sum[i];
    }
    printf("%d ",add);
    
    
}
int main() {
   
    int arr[] = {2, 15, 4, 3, 7,8,6};
    int size = 7;
    
    arradd(arr, size);
    
    return 0;

}