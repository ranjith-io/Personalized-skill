#include<stdio.h>


int shakecal(int pers)
{
    int k = pers;
    int total=0;
    for(int i = 1 ;i<=k;i++)
    {
        total+=(pers-1);
        pers--;
    }
    printf("%d",total);
}
int main()
{
    int pers;
    scanf("%d",&pers);
    
    shakecal(pers);
}