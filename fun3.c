#include<stdio.h>  // Preprocessor directive 

// Function with arguments (x, y) and without return value
int mult(int x,int y){
    // Calculates and prints multiplication of two numbers
    printf("multiplication=%d", x * y);
}

int main(){  // Main function (entry point of program)
    
    int a;  // Variable to store first number
    printf("Enter a 1st number :");
    scanf("%d", &a);  // Taking input from user
    
    int b;  // Variable to store second number
    printf("Enter a 2nd number :");
    scanf("%d", &b);  // Taking input from user
    
    mult(a, b);  // Calling function and passing arguments
    
    return 0;  // End of program
}