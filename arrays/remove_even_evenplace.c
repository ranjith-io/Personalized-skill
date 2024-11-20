#include <stdio.h>
int distance(int arr[],int size){
    // int c;
    // int count[size];
    for (int i=2;i<size;i++){
        
            for (int j=i;j<size;j++){
            if (arr[j]%2==0)
            {
                printf("%dj",arr[j]);
                arr[j]=arr[j+1];
            }
            size--;
            j--;
            
        }
    }
        // count[i]=c;

    
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main() {
    int arr[5]={8,1,9,4,3};
    int size=5;
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
distance(arr,size);

    return 0;
}