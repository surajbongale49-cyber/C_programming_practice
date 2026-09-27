#include<stdio.h>//preprocessor directive

int main(){
    int r1;
    printf("Enter a 1st row's :");
    scanf("%d",&r1);   // Input rows of first matrix

    int c1;
    printf("Enter a 1st colmn's :");
    scanf("%d",&c1);   // Input columns of first matrix

    int r2;
    printf("Enter a 2nd row's :");
    scanf("%d",&r2);   // Input rows of second matrix

    int c2;
    printf("Enter a 2nd colmn's :");
    scanf("%d",&c2);   // Input columns of second matrix

    // Declare matrices
    int arr[r1][c1], brr[r2][c2], res[r1][c2];

    // Check condition for matrix multiplication
    if(c1 == r2){

        printf("Enter a 1st matrix :\n");
        // Input first matrix
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c1; j++){
                scanf("%d", &arr[i][j]);
            }
        }

        printf("Enter a 2nd matrix :\n");
        // Input second matrix
        for(int i = 0; i < r2; i++){
            for(int j = 0; j < c2; j++){
                scanf("%d", &brr[i][j]);
            }
        }

        printf("The multiplication of this two matrix are :\n");

        // Matrix multiplication logic
        for(int i = 0; i < r1; i++){          // rows of first matrix
            for(int j = 0; j < c2; j++){      // columns of second matrix
                res[i][j] = 0;                // initialize result element

                for(int k = 0; k < c1; k++){  // common dimension
                    res[i][j] += arr[i][k] * brr[k][j]; // multiply & add
                }
            }
        }

        // Print result matrix
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c2; j++){
                printf("%d ", res[i][j]);
            }
            printf("\n");   // new line after each row
        }

    } else {
        // Condition fails → multiplication not possible
        printf("\nThe matrix multiplication does not exist");
    }

    return 0;   // End of program
}
