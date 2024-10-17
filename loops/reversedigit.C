#include <stdio.h>
#include<math.h>
int reversedigit(int num ){
    
    int rev=0;
    
    while(num!=0){
    
    
    int last=num%10;
    rev=rev*10+last;
    num/=10;}
    
    printf("%d",rev);
    
}
int main() {
    
    int num;
    scanf("%d",&num);
    reversedigit(num);
    

    return 0;
}