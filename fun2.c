#include<stdio.h>   // preprocessor directive

// Function without arguments and without return value
void afternoon(){
    printf("good afternoon");   // Prints "good afternoon"
}

// Function without arguments and without return value
void evening(){
    printf("good Evening\n");   // Prints "good Evening"
    afternoon();                // Calls afternoon() function
}

// Main function (entry point of program)
void main(){
    // Displaying program type
    printf("function without argument's without return values\n");
    
    printf("good Morning\n");   // Prints "good Morning"
    
    evening();  // Calls evening() function, which also calls afternoon()
}