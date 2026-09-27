#include<stdio.h>
int main(){
   FILE* ptr=fopen("cw.txt","w");
char str[]="placement lagegi yahi se";
fputs(str,ptr);
fclose(ptr);


}