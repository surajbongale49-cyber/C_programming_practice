#include<stdio.h>

void binary(int n)
{
    if(n > 1)
    {
        binary(n / 2);
    }

    printf("%d", n % 2);
}

int main()
{
    int N;

    printf("Enter a number: ");
    scanf("%d", &N);

    printf("Binary of %d is: ", N);
    binary(N);

    return 0;
}