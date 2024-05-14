#include<stdio.h>
int oddfact(int num)
{
    int sum=1;
    for(int i = 1;i<=num;i+=2)
    {
        sum*=i;
    }
    printf("%d",sum);
}
int main(){
    
    int num;
    scanf("%d",&num);
    
    oddfact(num);
}