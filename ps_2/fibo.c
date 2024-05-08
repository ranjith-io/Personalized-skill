
#include<stdio.h>


int fibo(int num){
    int first =0,second =1,next;
    
    for (int i=0;i<num;i++){
        printf("%d ",first);
        next=first+second;
        first=second;
        second=next;}

}
int main()
{
    int num;
    printf("Enter a positive num: ");
    scanf("%d",&num);
    if (num<0){
        
    
    printf("Invalid input");
    return 0;}
    
    fibo(num);
    
}