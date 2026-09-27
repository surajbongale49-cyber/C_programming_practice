#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
        char name[50];
        int no_of_pages;
        float price;
        
    }Ram;
    
    Ram b1;
    Ram b2;
    Ram b3;
     
    b1.price=40.269;
    printf("%f",b1.price);



    return 0;
}