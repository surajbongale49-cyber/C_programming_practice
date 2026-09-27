#include<stdio.h>
int main(){
    int x=5,y=7;
    int* p=&x;
    int* q=&y;
    printf("%p\n",p);
    printf("%p\n",q);

    return 0;
}