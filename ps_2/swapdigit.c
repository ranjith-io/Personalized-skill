#include <stdio.h>
#include <math.h>

int main() {
    int num, first_digit, last_digit, num_digits;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the number of digits
    num_digits = (int)log10(num);

    // Extract the first and last digits
    first_digit = num / pow(10, num_digits);
    last_digit = num % 10;

    // Swap the first and last digits
    num -= first_digit * pow(10, num_digits);
    num += last_digit * pow(10, num_digits);
    num -= last_digit;
    num += first_digit;

    // Output the number with swapped digits
    printf("Number after swapping first and last digits: %d\n", num);

    return 0;
}

      
    
    
    
    
