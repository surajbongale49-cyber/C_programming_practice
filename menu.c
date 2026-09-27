#include<stdio.h>

int main(){
    int choice;

    printf("MENU\n");
    printf("1. Transpose of matrix\n");
    printf("2. Inverse of matrix (2x2)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);   

    switch(choice){

        case 1: {
            // -------- TRANSPOSE --------
            int n, m;

            printf("Enter number of rows: ");
            scanf("%d", &n);

            printf("Enter number of columns: ");
            scanf("%d", &m);

            int arr[n][m];

            printf("Enter matrix elements:\n");

            // Input matrix
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    scanf("%d", &arr[i][j]);
                }
            }

            printf("\nTranspose of given matrix is:\n");

            // Print transpose
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    printf("%d ", arr[j][i]);
                }
                printf("\n");
            }

            break;
        }

        case 2: {
            // -------- INVERSE (2x2) --------
            int a[2][2];

            printf("Enter 2x2 matrix elements:\n");

            // Input matrix
            for(int i = 0; i < 2; i++){
                for(int j = 0; j < 2; j++){
                    scanf("%d", &a[i][j]);
                }
            }

            // Determinant
            int det = (a[0][0]*a[1][1]) - (a[0][1]*a[1][0]);

            if(det == 0){
                printf("Inverse does not exist (Determinant = 0)");
            } 
            else{
                printf("Inverse matrix is:\n");

                // Apply formula
                printf("%.2f %.2f\n", (float)a[1][1]/det, (float)(-a[0][1])/det);
                printf("%.2f %.2f\n", (float)(-a[1][0])/det, (float)a[0][0]/det);
            }

            break;
        }

        default:
            printf("Invalid choice");
    }

    return 0;
}