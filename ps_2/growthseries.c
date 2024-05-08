#include<stdio.h>

int growth(int num,int start)
{
    int count=0;
    for (int i=start;count<num;i*=2){
    printf("%d ",i);
    count++;}
    
    
}
int main()
{
    int num;
    scanf("%d",&num);
    int start;
    scanf("%d",&start);
    growth(num,start);
    
}