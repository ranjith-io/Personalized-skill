#include <stdio.h>

int main() {
    int num ;float sum=0;int j = 1;
    scanf("%d",&num);
    for (float i = 1; j<=num;i*=2)
    {
        sum+=1/i;
        j++;
        
    }
    printf("%.2f",sum);
    
}