#include <stdio.h>

void countOccurrences(int arr[], int size) {
    int i, j;
    int count;

    printf("\nElement\tOccurrences\n");

    // Array to keep track of elements that have been counted
    int counted[size];
    for (i = 0; i < size; i++) {
        counted[i] = 0;  // Initialize the counted array with 0 (not counted)
    }

    for (i = 0; i < size; i++) {
        if (counted[i] == 0) {  // If the element is not yet counted
            count = 1;
            for (j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    counted[j] = 1;  // Mark this element as counted
                }
            }
            // if(count>1) for on;y repeated elements
            printf("%d\t%d\n", arr[i], count);
        }
    }
}

int main() {
    int arr[] = {2, 15, 4, 15, 7, 4, 2, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    countOccurrences(arr, size);

    return 0;
}
