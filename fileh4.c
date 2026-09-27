#include<stdio.h>
int main(){
   FILE *ptr;
   ptr=fopen("factorial1.c","w");
    int num =200;
   fprintf(ptr,"%d" ,num);
   fclose(ptr);



    return 0;
}