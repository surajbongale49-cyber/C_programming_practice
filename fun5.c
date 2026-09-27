#include<stdio.h>   // Preprocessor directive 

// Function prototype (declaration)
// It tells the compiler that a function named sum exists
int sum(int y);

int main(){
    int n;   // Variable to store user input

    printf("Enter a number : ");
    scanf("%d",&n);   // Taking input from user

    // Function call and storing returned value
    int result = sum(n);

    // Printing the result
    printf("The sum of even numbers from 1 to %d is %d", n, result);

    return 0;   // End of program
}

// Function definition
int sum(int y)
{
    int sum1 = 0;   // Variable to store sum of even numbers

    // Loop from 1 to y
    for(int i = 1; i <= y; i++){
        if(i % 2 == 0){        // Check if number is even
            sum1 = sum1 + i;   // Add even number to sum
        }
    }

    return sum1;   // Return final sum
}