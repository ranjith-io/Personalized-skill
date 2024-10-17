#include <stdio.h>
int leapcount =0,nonleapcount=0;
int leapcheck(int year){
    int start;
    for (start=year+1;start<=year+10;start++)
    {
        if((start%4==0 && start%100!=0 )||( start%400==0))
        leapcount++;
        else 
        nonleapcount++;
    }
    printf("%d",start);
    printf("%d %d",leapcount , nonleapcount);
}
int main() {
    int year;
    scanf("%d",&year);
    leapcheck(year);
    return 0;
}