#include<stdio.h>
#include<stdbool.h>

bool not_in_arr(int *arr3,int k,int n){
    for(int i=0;i<n;i++){
        if(arr3[i]==k){
            return false;
        }
    }
    return true;
}
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n],arr2[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
        if(not_in_arr(arr2,arr[i],i)){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                continue;
            }
        }
        printf("%d ",arr[i]);
        sum=sum+arr[i];
        
        }
    }
    printf("%d\n",sum);
}