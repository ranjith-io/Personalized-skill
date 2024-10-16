#include <stdio.h>

void printUniqueElements(int arr[], int size) {
    int isUnique;

    for (int i = 0; i < size; i++) {
        isUnique = 1;  // Assume the element is unique

        // Check if this element has appeared before in the array
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;  // Element is not unique
                break;
            }
        }

        // If the element is unique, print it
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {2, 15, 4, -3, 9, 8, 2, 4, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    printUniqueElements(arr, size);

    return 0;
}
