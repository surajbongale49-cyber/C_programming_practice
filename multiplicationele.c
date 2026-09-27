#include<stdio.h>
int main(){
    int n;
    printf("Enter a size of arry :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int product=1;
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    printf("Product of element present in the arrys are:%d",product);
    return 0;
}