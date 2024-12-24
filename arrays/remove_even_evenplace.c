#include <stdio.h>
<<<<<<< HEAD
int evenplacerem(int arr[],int size){
    
    for (int i=2;i<size;i+=2){
            if (arr[i]%2==0){
            for (int j=i;j<size;j++){
            
                arr[i]=arr[i+1];

            }
            size--;
            i--;
=======
int distance(int arr[],int size){
    // int c;
    // int count[size];
    for (int i=2;i<size;i+=2){
            if (arr[i]%2==0){
            for (int j=i;j<size;j++)
            {
                // printf("%dj",arr[j]);
                arr[j]=arr[j+1];
            }
>>>>>>> 305e523 (Updated)
            
            size--;
            i--;
            
        
            }
    }
   
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main() {
<<<<<<< HEAD
    int arr[5]={8,1,9,49,30};
    int size=5;
=======
    int arr[10]={8,1,9,4,30,12,55,68,23,8};
    int size=10;
>>>>>>> 305e523 (Updated)
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
evenplacerem(arr,size);

    return 0;
}
