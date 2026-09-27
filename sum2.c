#include<stdio.h>
int main(){
    int n,remainder,sum=0;
    printf("Enter a any digit's number :");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    printf("the sum of digit present in the number are %d",sum);



    return 0;
}