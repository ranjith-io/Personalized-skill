#include <stdio.h>
#include<math.h>
int middleadd(int num){
    
    int last,middle;
    int sum = 0 ;
    int count=log10(num);
    last=num%10;
    int first = pow(10,count);
    middle = (num%first)-last;
    printf("%d",middle);
    while (middle!=0){
        int temp = middle%10;
        sum+=temp;
        middle/=10; 
        
    }
    printf("%d",sum);
    
}
int main() {
    
    int num;
    scanf("%d",&num);
    middleadd(num);
    

    return 0;
}