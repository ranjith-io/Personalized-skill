
#include <stdio.h>
int sum;
int divsum(int num){
    for(int i =1;i<num;i++)
{
    if (num%i==0)
    {sum+=i;
}

}
return sum;
    
}
int main(){
    int num;
    scanf("%d",&num);
    int sum = divsum(num);
    // printf("%d",sum);
    if (sum==num)
    printf("Equal number ");
    else 
    printf("Not equal number");
}