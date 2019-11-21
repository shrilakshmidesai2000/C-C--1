#include<stdio.h>

struct account{
    long int accno;
    char name[20];
    char type;
    float bal;
}custmer[5]={{101,"Vaibhav",'S',10000},
            {102,"Mahesh",'S',12000},
            {103,"Omkar",'S',14000},
            {104,"Shrihari",'C',9000},
            {105,"Shubham",'C',2000}
};
int accin;
float amount;


void deposit()
{
    printf("Enter the amount = ");
    scanf("%f",&amount);
    printf("\n");
    custmer[accin].bal=custmer[accin].bal+amount;
    balance();
}

void withdraw()
{
    printf("Enter the amount = ");
    scanf("%f",&amount);
    printf("\n");
    custmer[accin].bal=custmer[accin].bal-amount;
    balance();
}

void balance()
{
    printf("Balance = %f\n",custmer[accin].bal);
}

int main()
{
    int accnum,i,ch;
    printf("Enter the Account number= ");
    scanf("%d",&accnum);
    accin=(accnum%100)-1;

    printf("Account number= %d\nName : %s\nAccount type=  %c\nBalance = %f\n",custmer[accin].accno,custmer[accin].name,custmer[accin].type,custmer[accin].bal);
      while(1)
    {
        printf("\nEnter your choice\n1 : Balance Inquiry\n2 : Deposit Amount \n3 : Withdraw Amount\n4 : Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:balance();break;
            case 2:deposit();break;
            case 3:withdraw();break;
            case 4:exit(0);
            default:printf("Enter the correct choice");break;
        }
   }
}

