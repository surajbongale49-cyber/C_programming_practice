#include<stdio.h>
#include<string.h>
#define max 100
typedef struct student{
    int rollNo;
    char name[20];
    float mark;
}student;
void Newaddmmision(int* c1,student s1[]);
void showstudent(student s1[],int count);
int main(){
    student s1[max];
    int choice;
    int count=0;
    while (1) {
        
        printf("\n===== Student Management System =====\n");
        printf("1. New addmmision \n");
        printf("2. Show Students\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Newaddmmision(&count, s1);
                break;
            case 2:
                showstudent(s1, count);
                break;
            case 3:
               printf("Exit");
                return 0;
            default:
            printf("Invalid choice!");
        }
    }

}
void Newaddmmision(int* c1,student s1[]){
    if (*c1 >= max) {
        printf("Students are full!\n");
        return;
    }

    printf("\nEnter Roll No: ");
    scanf("%d", &s1[*c1].rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", s1[*c1].name);
    
    printf("Enter Marks: ");
    scanf("%f", &s1[*c1].mark);

    (*c1)++;

    printf("Student Added Successfully!\n");
}
void showstudent(student s1[],int count){
    if (count == 0) {
        printf("\nNo records found!\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("Roll: %d\n", s1[i].rollNo);
        printf("Name: %s\n", s1[i].name);
        printf("Marks: %.2f\n", s1[i].mark);
        printf("----------------------\n");
    }
}