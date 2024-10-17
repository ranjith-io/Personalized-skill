#include<stdio.h>
#include<math.h>

int digitsum(int num)
{
    int sum=0;
    while (num!=0)
    {
        int last= num%10;
        sum+=last;
        num/=10;
    }
    return sum;
}
int main(){
    int num;
    scanf("%d",&num);
    
    
    int sum = digitsum(num);
    
    while(sum>=10){
    sum=digitsum(sum);}
    printf("%d",sum);
}