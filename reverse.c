#include<stdio.h>
int main(){
    int n,remainder,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        remainder=n%10;
        sum=sum*10+remainder;
        n=n/10;
    }
    printf("the reverse number are %d",sum);


    return 0;
}