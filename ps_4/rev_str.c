#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[100]; // Declares a string of size 100
    int l, i; // Declare variables for string length and loop iteration

    printf("\n\nPrint individual characters of string in reverse order :\n");
    printf("------------------------------------------------------\n");
    printf("Input the string : ");

    // Read a string from the standard input (keyboard) using fgets()
    fgets(str, sizeof str, stdin);

    l = strlen(str); // Calculate the length of the string

    // Remove the newline character if it exists
    if (str[l - 1] == '\n') {
        str[l - 1] = '\0';
        l--; // Adjust the length after removing the newline
    }

    printf("The characters of the string in reverse are : \n");

    // Loop to print each individual character of the string in reverse order
    for (i = l - 1; i >= 0; i--) {
        printf("%c  ", str[i]); // Print each character in reverse order
    }

    printf("\n");

    return 0; // Return 0 to indicate successful execution of the program
}
