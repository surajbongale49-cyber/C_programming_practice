#include<stdio.h>
void hanoi(int n,char src,char help,char dest){
    if(n==1){
        printf("%c-->%c\n",src,dest);
        return ;
    }
    //(n-1)desks moves src to helper via the dest;
    hanoi(n-1,src,dest,help);
 
    printf("%c-->%c\n",src,dest);
    //(n-1)desks moves helper to dest via src;
    hanoi(n-1,help,src,dest);
}
int main(){
    hanoi(3,'A','B','c');
    return 0;
}