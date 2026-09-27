#include<Stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[50];
        int age;

    }a,b;

    a.age=40;
    strcpy(a.name,"Ramesh");

    b.age=20;
    strcpy(b.name,"Suresh");

    printf("%d\n",a.age);
    printf("%s",b.name);




    return 0;
}