#include<stdio.h>
int main(){
    int n,a,b,c,d,e;
    printf("Enter a five digit's number :");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    e=n%10;
    n=n/10;

    int sum=a+b+c+d+e;
    printf("The sum of all digits presents in the number is %d",sum);


    


    return 0;
}