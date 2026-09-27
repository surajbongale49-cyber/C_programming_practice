#include<stdio.h>//preprosessor directive

int main(){//main function
    char str[100];   // Array to store the string

    printf("Enter a string :");
    scanf("%[^\n]", str);   // Read string including spaces until newline

    int size = 0;

    // Calculate length of string manually
    while(str[size] != '\0'){
        size++;
    }

    // Sorting string in alphabetical order (Ascending)
    for(int i = 0; i < size; i++){          // Outer loop
        for(int j = i + 1; j < size; j++){  // Compare with next characters
            if(str[i] > str[j]){            // Swap if characters are out of order
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("The alphabetical order is:\n");
    printf("%s", str);   // Print sorted string

    return 0;   // End of program
}