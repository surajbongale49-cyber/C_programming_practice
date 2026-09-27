#include<stdio.h>//preprocessor directive

int main(){//main function
    int n;//variable declaration
    printf("Enter a row's of matrix :");
    scanf("%d",&n);   // Input number of rows

    int m;
    printf("Enter a colmn's of matrix :");
    scanf("%d",&m);   // Input number of columns

    int arr[n][m];    // Declare matrix of size n × m

    printf("Enter a 1st matrix :\n");

    // Input matrix elements
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nTranspose of given matrix is :\n");

    // Print transpose of matrix
    // Rows become columns and columns become rows
    for(int i = 0; i < m; i++){        // Loop through columns
        for(int j = 0; j < n; j++){    // Loop through rows
            printf("%d ", arr[j][i]);  // Swap indices
        }
        printf("\n");   // New line after each row
    }

    return 0;   // End of program
}