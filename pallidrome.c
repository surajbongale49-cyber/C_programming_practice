#include<stdio.h>//preprocessor directive
#include<string.h>

int main(){//main function
    char str[15];   // Array to store the input string

    puts("Enter a string:");
    scanf("%[^\n]", str);   // Read string including spaces

    int size = 0;
    int i = 0;

    // Find length of string manually
    while(str[i] != '\0'){
        size++;   // increase size count
        i++;      // move to next character
    }

    int j = size - 1;   // last index of string
    int Palindrome = 1; // assume string is palindrome (1 = true)

    // Check palindrome by comparing characters from both ends
    for(i = 0; i <= j; i++, j--){
        if(str[i] != str[j]){   // if mismatch found
            Palindrome = 0;     // not a palindrome
            break;              // exit loop early
        }
    }

    // Print result
    if(Palindrome)
        printf("The string is a Palindrome");
    else
        printf("The string is NOT a Palindrome");

    return 0;   // end of program
}