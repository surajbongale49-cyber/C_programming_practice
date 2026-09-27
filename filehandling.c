#include<stdio.h>
int main(){
   FILE* ptr = fopen("suraj.txt","r");
   char str[2000];

   while(fgets(str, 2000, ptr) != NULL){
       printf("%s", str);
   }

   
}