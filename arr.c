#include<stdio.h>//preprocessor directive

// Function to check whether a number is prime or not
int Prime(int num){
    if(num <= 1)
        return 0;   // 0 and 1 are not prime numbers

    // Check divisibility from 2 to num/2
    for(int i = 2; i <= num/2; i++){
        if(num % i == 0){
            return 0;   // If divisible → not prime
        }
    }

    return 1;   // If no divisor found → prime
}

// Function to process entire array
void findPrimes(int arr[], int n){
    int count = 0;   // To store number of prime elements

    printf("Prime numbers in the array are:\n");

    // Traverse each element of array
    for(int i = 0; i < n; i++){
        if(Prime(arr[i])){   // Call prime checking function
            printf("%d ", arr[i]);  // Print prime number
            count++;                // Increment count
        }
    }

    // Print total count of prime numbers
    printf("\nTotal prime numbers = %d", count);
}

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);   // Input size of array

    int arr[n];        // Declare array

    // Input array elements
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Pass entire array to function
    findPrimes(arr, n);

    return 0;   // End of program
}