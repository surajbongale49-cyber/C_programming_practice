#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        int no_of_pages;
        float price;
    }a,b;
     
    a.no_of_pages=400;
    a.price=999;
    strcpy(a.name,"Mahabharta");


    printf("%.1f\n",a.price);
    printf("%s",a.name);
    




    return 0;
}