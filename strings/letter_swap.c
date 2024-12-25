#include <stdio.h>
#include <string.h>
int main() {
    char str[1024];
    scanf("%[^\n]",str);
    for(int i=0;i<strlen(str)-1;i+=2){
    
        int temp=str[i];
        str[i]=str[i+1];
        str[i+1]=temp;
   
    }
    printf("%s",str);
    return 0;
}