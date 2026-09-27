#include<stdio.h>
#include<string.h>

#define max 100

typedef struct Bank{
    char name[20];
    int ACno;
    float Bal;
} customer;

void Newaccount(customer c1[],int* a);
void showcustomer(customer c1[],int count);
void Withdraw(customer c1[] ,int count);
void CheckBalance(customer c1[],int count);

int main(){
    customer c[max];
    int n;
    int count=0;

    while(1){
        printf("\n1.New\n2.Show\n3.Withdraw\n4.Check\n5.Exit\n");
        printf("Enter choice : ");
        scanf("%d" ,&n);

        switch(n){
            case 1:
                Newaccount(c, &count);
                break;
            case 2:
                showcustomer(c,count);
                break;
            case 3:
                Withdraw(c ,count);
                break;
            case 4:
                CheckBalance(c,count);
                break;
            case 5:
                printf("Exit !");
                return 0;
            default :
                printf("Invalid Choice !");
        }
    }
}

void Newaccount(customer c1[],int* a){
    if((*a) >= max){
        printf("\nNo more entries allowed!\n");
        return;
    }

    printf("\nEnter Name : ");
    scanf(" %[^\n]" ,c1[*a].name);

    printf("Enter Account No. : ");
    scanf("%d" ,&c1[*a].ACno);

    printf("Enter Initial Balance : ");
    scanf("%f" ,&c1[*a].Bal);

    (*a)++;
}

void showcustomer(customer c1[],int count){
    if(count==0){
        printf("\nNo records found!\n");
        return;
    }

    for(int i=0;i<count;i++){
        printf("\nName : %s", c1[i].name);
        printf("\nAccount No. : %d", c1[i].ACno);
        printf("\nBalance : %.2f\n", c1[i].Bal);
    }
}

void Withdraw(customer c1[] ,int count){
    if(count==0){
        printf("\nNo records found!\n");
        return;
    }

    int acc;
    float amt;

    printf("Enter Account No: ");
    scanf("%d", &acc);

    for(int i=0;i<count;i++){
        if(c1[i].ACno == acc){
            printf("Enter Amount: ");
            scanf("%f", &amt);

            if(amt > c1[i].Bal){
                printf("Insufficient Balance!\n");
            } else {
                c1[i].Bal -= amt;
                printf("Withdrawal Successful!\n");
            }
            return;
        }
    }

    printf("Account not found!\n");
}

void CheckBalance(customer c1[],int count){
    if(count==0){
        printf("\nNo records found!\n");
        return;
    }

    int acc;

    printf("Enter Account No: ");
    scanf("%d", &acc);

    for(int i=0;i<count;i++){
        if(c1[i].ACno == acc){
            printf("Balance: %.2f\n", c1[i].Bal);
            return;
        }
    }

    printf("Account not found!\n");
}