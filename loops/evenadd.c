#include <stdio.h>
#include<math.h>
int evenadd(int num){
    
    int sum = 0 ;
    for (int i = 2; i<=num;i+=2)
    {sum+=i;
    }
    printf("sum is %d",sum);
}
int main() {
    
    int num;
    scanf("%d",&num);
    evenadd(num);
    

    return 0;
}