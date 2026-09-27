#include<stdio.h>
int main(){
     int p;
     printf("Enter the number :");
     scanf("%d",&p);
     int q;
     printf("Enter the 2nd number :");
     scanf("%d",&q);
     int r;
     printf("Enter the number :");
     scanf("%d",&r);
     int s;
     printf("Enter the 2nd number :");
     scanf("%d",&s);
    int arr[p][q],brr[r][s];
    printf("Enter the 1st matrix: ");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the 2nd matrix: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<s;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    printf("the addition of this number :\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%d ",arr[i][j]+brr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}