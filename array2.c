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

    int min = arr[0];   // Assume first element is minimum

    // Find minimum element in array
    for(int i = 0; i < n; i++){
        if(min > arr[i]){   // Compare current element with min
            min = arr[i];   // Update min if smaller element found
        }
    }

    // Print minimum value
    printf("\nMinimum number is %d", min);

    return 0;   // End of program
}