#include<stdio.h>

void printPrimes(int arr[], int size) {   
    for (int i = 0; i < size; i++) {
        int k = arr[i];
        int isPrime = 1;  
        for (int j = 2; j * j <= k; j++) {
            if (k % j == 0) {
                isPrime = 0;  
                break;        
            }
        }

        if (isPrime && k > 1) {
            printf("%d\n", k);  
        }
    }
}

int main() {
    int arr[] = {2, 15, 4, 3, 7};
    int size = 5;
    
    printPrimes(arr, size);
    
    return 0;
}
