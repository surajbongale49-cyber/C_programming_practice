#include<stdio.h>
int main(){
  int arr[7]={11,22,36,88,97,54,63};

  for(int i=0;i<7;i++){
  if(arr[i]<35){
    printf("%d\n",i);
  }
  }

    return 0;
}