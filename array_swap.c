#include<stdio.h>
void swap(int* ptr1,int*ptr2,int n){
       for(int i=0;i<n;i++){
        int temp=*(ptr1+i);
          *(ptr1+i)=*(ptr2+i);
          *(ptr2+i)=temp;
       }
}
int main(){
   int arr[5]={1,2,3,4,5};
   int brr[5]={100,99,88,77,66};
   swap(arr,brr,5);
    printf("After swapping the 1st array is :\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
     printf("\nAfter swapping the 2nd array is :\n");
    for(int i=0;i<5;i++){
        printf("%d ",brr[i]);
    }



    return 0;
}