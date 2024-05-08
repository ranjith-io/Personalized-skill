#include<stdio.h>

int checkeven(int num)
{
   
    
    int evensum=0;
    for (int i = 2;i<=num;i+=2){
        evensum+=i;
        
    }

    printf("%d ",evensum);
}
int checkodd(int num) 
{
    int oddsum=0;
    for (int i =1 ;i<=num;i+=2)
    {
        oddsum+=i;
    }
    printf("%d ",oddsum);
}

int main()
{
    int num;
    scanf("%d",&num);
  
    checkodd(num);
    checkeven(num);
}