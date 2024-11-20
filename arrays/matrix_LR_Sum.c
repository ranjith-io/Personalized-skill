#include<stdio.h>

int main(){
    int row=3,col=4,suma=0;
    int arr[row][col],arr2[row][col],sum[row][col];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // for (int i=0;i<row;i++){
    //     for (int j=0;j<col;j++){
    //         scanf("%d",&arr2[i][j]);
    //     }
    // }
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // for (int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         printf("%d ",arr[j][i]);
    //     }
    //     printf("\n");
    // }
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            if (i==j){//i+j==row-1
                suma+=arr[i][j];
            }
            // sum[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    printf("%d ",suma);
    // for (int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         printf("%d ",sum[i][j]);
    //     }
    //     printf("\n");
    // }
    
    return 0;
}