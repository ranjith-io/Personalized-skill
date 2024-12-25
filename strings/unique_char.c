#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    char visited[100]={0};
    int size=strlen(str);
  
    
    for (int i=0;i<size;i++){
        if (visited[i]==0){
        for (int j=i+1;j<size;j++){
            if(str[i]==str[j]){
            visited[j]=1;
            // visited[i]=1;//uncomment to display only unique char.
            }
        }
    }
    }
    for (int i=0;i<size;i++){
        if(visited[i]==0)
        printf("%c",str[i]);
    }
}