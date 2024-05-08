#include<stdio.h>
int isprime(int num){
    if (num<=1)
    return 0;
    for (int i =2;i*i<=num;i++){
        if(num%i==0)
        return 0;
}
    return 1;
    
}
int main()
{
    int num;
    printf("Enter a positive number : ");
    scanf("%d",&num);
    int count =0;

    for (int i =num+1 ; count<5;i++)
    {
        if (isprime(i))
    {
        printf("%d ",i);
        count++;
    }
}}