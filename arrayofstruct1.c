#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
      char name[200];
      int page;
      float price;
      int stablish;
    }book;
     
    book arr[3];
    strcpy(arr[0].name,"Mahabharta");
    arr[0].page=200;
    arr[0].price=1999.9;
    arr[0].stablish=2020;

    strcpy(arr[1].name,"Ramayana");
    arr[1].page=400;
    arr[1].price=2999.9;
    arr[1].stablish=2010;

    strcpy(arr[2].name,"Aganipankh");
    arr[2].page=600;
    arr[2].price=3999.9;
    arr[2].stablish=2019;

    for(int i=0;i<3;i++){
      printf("\n");
      printf("%s\n",arr[i].name);
      printf("%d\n",arr[i].page);
      printf("%d\n",arr[i].stablish);
      printf("%f\n",arr[i].price);

    }
     
    return 0;
}
