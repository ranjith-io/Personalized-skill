#include <stdio.h>
#include<math.h>
int digitadd(int num){
    
    int first,last;
    int count=log10(num);
    first=num%10;
    last=num/pow(10,count);
    int add = first +last;
    printf("%d",add);
}
int main() {
    
    int num;
    scanf("%d",&num);
    digitadd(num);
    

    return 0;
}
