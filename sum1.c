#include<stdio.h>
int foo(int x){
    if(x==1 || x==0){
        return 1;   
    }
     return x+foo(x-1);

}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    foo(n);
    printf("the sum of this number's are %d",foo(n));




    return 0;
}