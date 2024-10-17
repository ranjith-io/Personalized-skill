#include<stdio.h>
int even (int num){
    
    int a;
    a= num/2;
    return a;
}
int odd(int num)
{
    int a ;
    a = (num/3)+1;
    return a;
}
int main(){
    int num,a;
    scanf("%d",&num);
    while(num!=1){
    if (num%2==0)
    {
        int ans = even(num);
        num=ans;
        a++;
    }
    else if (num%2!=0)
    {
        int ans = odd(num);
        num=ans;
        a++;
    }
}
printf("%d",a);
}