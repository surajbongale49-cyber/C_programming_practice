#include<stdio.h>
int sum(int n){
    if(n==1 || n==2){
        return 1;
    }
    return sum(n-1)+sum(n-2);
}
int main(){
    int n,result;
    printf("Enter a term of fibonacii :");
    scanf("%d",&n);
     result=sum(n);
    printf("the %d term of fibonacii is :%d",n,result);


    return 0;
}