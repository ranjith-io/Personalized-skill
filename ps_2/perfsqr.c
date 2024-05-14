#include <stdio.h>
#include<math.h>
int perfsqu(float num ){
    
    for (int i = 0  ; i<=num;i++)
    {
        if (i*i==num){
        printf("ps");
        return 0 ;
        
    }
    }
    printf("not");
}
int main() {
    
    float num;
    scanf("%f",&num);
    perfsqu(num);
    

    return 0;
}