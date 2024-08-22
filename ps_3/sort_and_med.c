#include <stdio.h>

int arrsort(int arr[],int size)
{
    
    for ( int i =0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
        if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
        
    }
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
        
    }
    printf("\n");
    if(size%2==0)
    {
        printf("%d ",(arr[size/2]+arr[(size/2)-1])/2);
    }
    else
    printf("%d",arr[size/2]);
   
    
}
int main() {
   
    int arr[] = {2, 15, 4, 3, 7,8};
    int size = 6;
    
    arrsort(arr, size);
    
    return 0;

}