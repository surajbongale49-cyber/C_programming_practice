#include<stdio.h>
int main(){
    int n;
    printf("Enter a size of array :");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    return 0;
}