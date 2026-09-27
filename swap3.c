#include<stdio.h>
int main(){
    int a;
    printf("Enter a 1st Number :");
    scanf("%d",&a);
    int b;
    printf("Enter a 2nd Number :");
    scanf("%d",&b);
    printf("before swaping the value of a is %d and the value of b is %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping the value of a is %d and the value of b is %d",a,b);



    return 0;
}