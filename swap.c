#include<stdio.h>
int main(){
    int a;
    printf("Enter a 1st number :");
    scanf("%d",&a);
    int b;
    printf("Enter a 2nd number :");
    scanf("%d",&b);
    printf("\nBefore swaping the value of a is %d and the value of b is %d",a,b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swaping the value of a is %d and the value of b is %d",a,b);


    return 0;
}