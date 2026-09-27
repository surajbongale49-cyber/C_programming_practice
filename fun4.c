#include<stdio.h>  // Preprocessor directive 

// Function without arguments but with return value
int foo(){
    int a;  // Variable to store first number
    printf("Enter a 1st number :");
    scanf("%d",&a);  // Taking input from user

    int b;  // Variable to store second number
    printf("Enter a 2nd number :");
    scanf("%d",&b);  // Taking input from user

    return a - b;  // Returns subtraction of a and b
}

int main(){
    printf("Hello world!\n");  // Prints greeting message

    int result = foo();   // Function call (only once) and store result

    // Printing the returned result
    printf("Subtraction of these two numbers is %d", result);

    return 0;  // end  of program
}