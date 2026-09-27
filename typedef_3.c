#include<stdio.h>
int main(){
   typedef struct pokemon{
    int hp;
    int attack;
    char tier; 
   }pokemon;

   pokemon arr[3];
   arr[0].attack=100;
   arr[0].hp=20;
   arr[0].tier='A';




    return 0;
}