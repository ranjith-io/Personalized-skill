#include<stdio.h>
#include<math.h>

int isarmstrong(int count,int num)
{
    int sum=0;
    while (num!=0)
    {
        int last= num%10;
        sum+=pow(last,count);
        num/=10;
    }
    return sum;
}
int main(){
    int num;
    scanf("%d",&num);
    int count=log10(num)+1;
    
    int sum = isarmstrong(count,num);
    
    if (sum==num)
    printf("armstrong");
    else 
    printf("not");
}