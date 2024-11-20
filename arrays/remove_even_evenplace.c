#include <stdio.h>
int evenplacerem(int arr[],int size){
    
    for (int i=2;i<size;i+=2){
            if (arr[i]%2==0){
            for (int j=i;j<size;j++){
            
                arr[i]=arr[i+1];

            }
            size--;
            i--;
            
        }
    }
   
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main() {
    int arr[5]={8,1,9,49,30};
    int size=5;
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
evenplacerem(arr,size);

    return 0;
}
