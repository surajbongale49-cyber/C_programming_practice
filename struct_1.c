#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int height;
        int speed;
        char tier;
    };
    struct pokemon pikachhu;
    pikachhu.height=20;
    pikachhu.hp=300;
    pikachhu.speed=30;
    pikachhu.tier='A';
    printf("%d\n",pikachhu.height);
    struct pokemon charizard;
    charizard.height=40;
    charizard.hp=400;
    charizard.speed=450;
    charizard.tier='B';
    printf("%d\n",charizard.speed);

  
    





    return 0;
}