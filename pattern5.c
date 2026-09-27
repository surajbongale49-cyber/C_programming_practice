#include<stdio.h>
int main(){
// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 * 
// *                 * 
// * *             * * 
// * * *         * * * 
// * * * *     * * * * 
// * * * * * * * * * * 
    int n;
    printf("Enter a no of row's :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n+1-i;j>=1;j--){
            printf("* ");
        }for(int k=1;k<2*i-1;k++){
            printf("  ");
        }for(int t=n+1-i;t>=1;t--){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        for(int k=1;k<=2*(n-i);k++){
            printf("  ");
        }for(int t=1;t<=i;t++){
            printf("* ");
        }
        printf("\n");
    }


    


    return 0;
}