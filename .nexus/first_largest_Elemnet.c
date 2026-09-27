#include <stdio.h>
#include <limits.h>

int main() {
    int arr[8] = {89, 55, 66, 99, 32, 1, 23, 3};

    int largest = arr[0];

    // Find largest element
    for (int i = 1; i < 8; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element is %d", largest);

    int second_largest = INT_MIN;

    // Find second largest element
    for (int i = 0; i < 8; i++) {
        if (arr[i] != largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }

    printf("\nThe second largest element is %d", second_largest);

    return 0;
}