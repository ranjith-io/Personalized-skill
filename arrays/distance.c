#include <stdio.h>
int distance(int arr[],int size){
    int ds;
    for (int i=0;i<size;i++){
        for(int j=1;j<size;j++){
            if (arr[i]==arr[j]&i!=j)
            {
                printf("%d ",i);
                printf("%d ",j);
                ds=j-i-1;
                printf("\n");
                printf("%d ",ds);

                return 0;
            }
        }
    }
}
int main() {
    int arr[7]={11,34,56,67,12,45,34};
    int size=7;
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
distance(arr,size);

    return 0;
}
