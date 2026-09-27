#include<stdio.h>
int fact(int x){
    if(x==0 || x==1){
        return 1;
    }
  return x*fact(x-1);

}
int main(){
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    fact(n);
    printf("%d!=%d",n,fact(n));



    return 0;
}