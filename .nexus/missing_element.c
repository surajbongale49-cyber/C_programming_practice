#include<stdio.h>

int main() {
    int arr[9] = {1,2,5,6,7,8,9,4,10};
    int n;

    printf("Enter the Number: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i = 0; i < 9; i++) {
        sum += arr[i];
    }

    int res = n * (n + 1) / 2;
    int missing = res - sum;

    printf("The missing element is %d", missing);

    return 0;
}