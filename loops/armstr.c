#include<stdio.h>
#include<math.h>

int isarmstrong(int count,int num)
{   
    int sum=0;
    int n = num;
    while (num!=0)
    {
        int last= num%10;
        sum+=pow(last,count);
        num/=10;
    }
    // printf("%d ",sum);
    
    return (sum==n);
}
int main(){
    int num;
    scanf("%d",&num);
    int count=log10(num)+1;
    
    // int sum = isarmstrong(count,num);
    //     printf("%d ",sum);

    
    int find=0;
    int n = num;
    // printf("%d ",n);
    // int k= isarmstrong(count,n);
    // printf("%d",k);

    for (n; find < 5 ; n++){
        int count = log10(n)+1;
        if (isarmstrong(count,n)){
        printf("%d ",n);
        find++;}
    }
    

}