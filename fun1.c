#include<stdio.h>   // Preprocessor directive 

// Function with arguments and with return value
int sum(int x,int y){
    return x + y;   // Returns addition of x and y
}

int main(){
    int a;   // Variable to store first number
    printf("Enter a 1st number :");
    scanf("%d",&a);   // Taking input from use r

    int b;   // Variable to store second number
    printf("Enter a 2nd number :");
    scanf("%d",&b);   // Taking input from user

    sum(a,b);   // This call is unnecessary (result not used)

    // Calling function again and printing returned value
    printf("the sum of this two number is %d", sum(a,b));

    return 0;   // End of program
}