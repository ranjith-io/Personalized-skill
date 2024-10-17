#include<stdio.h>
#include<math.h>

int ispalin(int original)
{
    int rev=0;
    int num=original;
    while(num!=0){
    
    
    int last=num%10;
    rev=rev*10+last;
    num/=10;}
    if (original == rev){
        return 1;
}
    else 
    return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    
    
    int count =0 ; 
    for (int start=num+1 ; count<5;start++)
        {
            if (ispalin(start)){
            printf("%d ",start);
            count++;
                
            }
            
        }
    
}