#include <stdio.h>
int distance(int arr[],int size){
    int c;
    int count[size];
    for (int i=0;i<size;i++){
        c=0;
        for(int j=1;j<size;j++){
            if (arr[i]>arr[j])
            {
                c++;
            }
            
        }
        count[i]=c;

    }
    for (int i=0;i<size;i++){
        printf("%d ",count[i]);
    }
}
int main() {
    int arr[5]={8,1,2,2,3};
    int size=5;
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
distance(arr,size);

    return 0;
}
