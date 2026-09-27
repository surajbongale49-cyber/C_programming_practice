#include<stdio.h>
int main(){
    int n;
    printf("Enter a no of row's :");
    scanf("%d",&n);
    // int b;
    // printf("Enter  a no of colmn's :");
    // scanf("%d",&b);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("* ");
        }
        printf("\n");
    }



    return 0;
}