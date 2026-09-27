#include <stdio.h>

int main() {
    int n, a = 1, b = 1, sum;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input");
        return 0;
    }

    // First two terms
    printf("%d %d ", a, b);

    for (int i = 3; i <= n; i++) {
        sum = a + b;
        printf("%d ", sum);

        a = b;
        b = sum;
    }

    return 0;
}