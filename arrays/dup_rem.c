#include <stdio.h>

int dupRemove(int arr[],int size) {
    // Write C code here
    int i , j , k,sum=0;
    for ( i = 0; i < size; i ++)  
        {  
            for ( j = i + 1; j < size; j++)  
            {  
                if ( arr[i] == arr[j])  
                {  
                    for ( k = j; k < size - 1; k++)  
                    { 
                        arr[k] = arr [k + 1];  
                    }  
                    size--;  
                      
                    j--;      
                }  
            }  
        }  
          
          
        printf (" \n Array elements after deletion of the duplicate elements: ");  
          
        for ( i = 0; i < size; i++)  
        {  
            printf (" %d \t", arr[i]);  
        }  
        return 0; 
}

int main() {
    int arr[] = {2, 15, 4, 15, 7,2,15};
    int size = 7;
    
    dupRemove(arr, size);
    
    return 0;
}