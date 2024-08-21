#include <stdio.h>

void printPeakElements(int arr[], int size) {
    printf("Peak elements in the array are: ");

    for (int i = 0; i < size; i++) {
        // Check if the current element is a peak
        if ((i==size-1&& (arr[i] > arr[i-1])) || // Last element, only left neighbor
            (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])) {  // Middle elements
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {3,1, 20, 4, 1, 0, 15, 91};
    int size = sizeof(arr) / sizeof(arr[0]);

    printPeakElements(arr, size);

    return 0;
}
