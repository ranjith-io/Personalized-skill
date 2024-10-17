#include<stdio.h>
#include<math.h>


int factorial(int num){
    int fact = 1;
    for (int i =1;i<=num;i++)
    {
        fact*=i;
    }
    // printf("%d",fact);
    return fact;
    
}
int series(int num,int end)
{
    
    int sum=0;
    int j=2;
    for(int i =1;i<=end;i++)
    {
        
      int fact = factorial(j);
      printf("%dk ",fact);
      sum += pow(num,j) /fact;
      j*=2;
    }
    printf("%d",sum);
}

int main(){
    
    int num;
    scanf("%d",&num);
    int end;
    scanf("%d",&end);
    
    series(num,end);
}