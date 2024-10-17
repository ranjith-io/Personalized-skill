#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; 
        i++;
    }
    }

    
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1; 

    return 0; 
}
    }

int main() {
    char str1[100], str2[100];
    
    printf("Enter the first string: ");
    fgets(str1,sizeof str1,stdin); 

    printf("Enter the second string: ");
    fgets(str2,sizeof str2,stdin);

    if (compareStrings(str1, str2)) {
        printf("The strings are the same.\n");
    } else {
        printf("The strings are not the same.\n");
    }

    return 0;
}
