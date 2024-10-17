#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    int l = 0; 
    printf("\n\nFind the length of a string :\n"); // Display information about the task
    printf("---------------------------------\n"); 	
    printf("Input the string : ");

    
    fgets(str, sizeof str, stdin);

    while (str[l] != '\0') {
        l++; 
    }

    printf("Length of the string is : %d\n\n", l - 1); // Display the length of the string
	
	return 0;
