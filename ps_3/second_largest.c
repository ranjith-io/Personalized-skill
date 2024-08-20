#include <stdio.h>

int findSecondLargest(int arr[], int n) {
    int largest = arr[0];
    int second_largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
            // printf("largest %d ",largest);
            // printf("Second largest element: %d\n", second_largest);

        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
            // printf("%d ",largest);
            // printf("Second largest element: %d\n", second_largest);

            
        }
        
    }

    return second_largest;
}

int main() {
    int arr[] = {2,1,3,4,8,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int second_largest = findSecondLargest(arr, n);
    printf("Second largest element: %d\n", second_largest);
    return 0;
}
