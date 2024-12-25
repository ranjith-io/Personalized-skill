// Online C compiler to run C program online
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int isprime(int count){
    if (count<=1){
        return 0;
    }
    for (int i=2;i*i<=count;i++){
        if(count%i==0)
        return 0;
    }
    return 1;
}
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int count=0;
    int len=strlen(str);
    str[strcspn(str,"\n")]=0;
    for (int i=0;i<len;i++){
        if(str[i]!='\0'&&str[i]!=' '){
            count++;
        }
    }
    printf("%d\n",count);
    
    if (count%2==0){
        printf("Even");
    }
    else if (isprime(count))
    printf("Prime");
    else 
    printf("Odd");
}