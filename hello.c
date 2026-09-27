#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double a, b, result;
    int choice;

    while (1) {
        printf("\nSimple Calculator\n");
        printf("1) Add (+)\n");
        printf("2) Subtract (-)\n");
        printf("3) Multiply (*)\n");
        printf("4) Divide (/)\n");
        printf("5) Modulus (%%) [integers]\n");
        printf("6) Exit\n");
        printf("Choose operation (1-6): ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }

        if (choice == 6) {
            break;
        }

        if (choice == 5) {
            long long x, y;
            printf("Enter two integers separated by space: ");
            if (scanf("%lld %lld", &x, &y) != 2) {
                printf("Invalid input.\n");
                continue;
            }
            if (y == 0) {
                printf("Error: Division by zero in modulus.\n");
                continue;
            }
            printf("Result: %lld\n", x % y);
            continue;
        }

        printf("Enter two numbers separated by space: ");
        if (scanf("%lf %lf", &a, &b) != 2) {
            printf("Invalid input.\n");
            continue;
        }

        switch (choice) {
            case 1:
                result = a + b;
                printf("Result: %.6g\n", result);
                break;
            case 2:
                result = a - b;
                printf("Result: %.6g\n", result);
                break;
            case 3:
                result = a * b;
                printf("Result: %.6g\n", result);
                break;
            case 4:
                if (b == 0.0) {
                    printf("Error: Division by zero.\n");
                } else {
                    result = a / b;
                    printf("Result: %.6g\n", result);
                }
                break;
            default:
                printf("Invalid choice. Please select 1-6.\n");
                break;
        }
    }

    printf("Goodbye!\n");
    return 0;
}