#include<stdio.h>
int main(){
    int n;
    printf("Enter the 1st Number :");
    scanf("%d",&n);
    int m;
    printf("Enter the 2nd Number :");
    scanf("%d",&m);
    char ch;
    printf("Enter the Character ('+','-','*','/','%'):");
    scanf(" %c",&ch);
    switch (ch)
    {
        case '+':
        printf("sum=%d",n+m);
        break;
        case '-':
        printf("sub=%d",n-m);
        break;
        case '*':
        printf("mult=%d",n*m);
        break;
        case '/':
        printf("Div=%d",n/m);
        break;
        case '%':
        printf("rem=%d",n%m);
        break;
        default:
       printf("Inavalid charcater :");
        break;
    }





    return 0;
}