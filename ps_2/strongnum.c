#include<stdio.h>

int factorialsum(int num)
{
    int fact=1;
    for (int i=1;i<=num;i++)
    {
        
            fact *=i;
            
        
    }
    
    return fact;
    
}
int ext(int num)
{
    int ori=num,sum = 0;
    while (ori!=0)
    {
          


        int digit = ori%10;
        

        
        sum += factorialsum(digit);
        ori/=10;
        
        
    }
    printf("%d",sum);
}
int main()

{
    int num;
    scanf("%d",&num);
    ext(num);
    
    // int fact= factorialsum(num);
    
}