#include<stdio.h>//preprocessor directive

int main(){//main function
    int n;//variable declaration
    printf("Enter a size of array :");
    scanf("%d",&n);   // Input size of array

    int arr[n];       // Declare array of size n

    // Input elements into array
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Sorting array in descending order
    for(int i = 0; i < n; i++){          // Outer loop
        for(int j = i + 1; j < n; j++){  // Compare with next elements

            // If current element is smaller, swap
            if(arr[i] < arr[j]){
                int temp = arr[i];       // Store value temporarily
                arr[i] = arr[j];        // Swap
                arr[j] = temp;
            }
        }
    }

    // Output sorted array
    printf("Array in descending order:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);   // Print each element
    }

    return 0;   // End of program
}