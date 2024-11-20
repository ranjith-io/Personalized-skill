#include <stdio.h>
int isprime(int a,int size){
    
    if (a<=1){
        return 1;
    }
    for (int i=2;i*i<=a;i++){
        if(a%i==0){
            return 1;
        }
    }
    return 0;
    
   
}
int main() {
    int arr[10]={2,1,9,3,30,12,55,68,23,37};
    int size=10;
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i=0;i<size;i++){
        int a=arr[i];
    if (isprime(a,size)){
        printf("%d ",arr[i]);
    }
    }

    return 0;
}