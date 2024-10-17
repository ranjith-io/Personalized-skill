#include <stdio.h>

void arrchunk(int arr[], int size,int num) {
    int newarr[num];
    int extra = size%num;
    for(int i = 0;i<(size-extra);i++)
    {
        printf("[");

        for(int j=0;j<num;j++)
        {
            
            
            printf("%d",arr[i]);
            if(j<num-1)
            {
                printf(",");
            }
            i++;

        }
        printf("] ");
        i--;
    }

    
    
    
}

int main() {
    int arr[] = {29, 15, 4,9,85 ,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    printf("number of chunks");
    scanf("%d",&num);

    arrchunk(arr, size ,num);
    

    return 0;
}
