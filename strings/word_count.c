#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define str_size 100

int main() {
    char str[str_size];
    int i, wrd;
    
    printf("\n\nCount the total number of words in a string :\n");
    printf("------------------------------------------------------\n");
    printf("Input the string : ");
    
    fgets(str, sizeof str, stdin); // Input the string

    i = 0;
    wrd = 0; // Start word count at 0

    /* Loop through the string to count words */
    while (str[i] != '\0') {
        // Check if the current character is a non-space character
        // and either it is the first character or preceded by a whitespace character
        if ((i == 0 && str[i] != ' ' && str[i] != '\n' && str[i] != '\t') || 
            (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && 
             (str[i-1] == ' ' || str[i-1] == '\n' || str[i-1] == '\t'))) {
            wrd++;
        }
        i++;
    }

    printf("Total number of words in the string is : %d\n", wrd); // Print correct word count

    return 0;
}
