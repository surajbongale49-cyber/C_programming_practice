#include<stdio.h>

// Function to find determinant of 2x2 matrix
int determinant2x2(int a[2][2]){
    // Formula: (a*d - b*c)
    return (a[0][0]*a[1][1]) - (a[0][1]*a[1][0]);
}

int main(){
    int n;
    printf("Enter order of matrix (only 2x2 supported): ");
    scanf("%d",&n);   // Input size (must be 2)

    int a[2][2];      // Declare 2x2 matrix

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // Find determinant of matrix
    int det = determinant2x2(a);

    // Check if inverse exists
    if(det == 0){
        // If determinant is 0 → inverse not possible
        printf("Inverse does not exist (Determinant = 0)");
    } 
    else{
        // Find adjoint matrix
        int adj[2][2];

        // Swap diagonal elements
        adj[0][0] = a[1][1];
        adj[1][1] = a[0][0];

        // Change sign of off-diagonal elements
        adj[0][1] = -a[0][1];
        adj[1][0] = -a[1][0];

        // Print inverse matrix
        printf("Inverse matrix is:\n");

        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                // Divide each element of adjoint by determinant
                printf("%.2f ", (float)adj[i][j] / det);
            }
            printf("\n");   // New line after each row
        }
    }

    return 0;   // End of program
}

