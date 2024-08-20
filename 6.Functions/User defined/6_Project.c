#include<stdio.h>
void details();
void balance();
void withdrawal();
void deposit();
long int amount=1000000;
int main()
{
  int z;
  char y;
  do
  {  
  printf("\t\t\twelcome to our bank server\n\t\t\t\t\n\t\t\t\t||\n\t\t\tPlease choose any option\n");
  printf("1. for personal details\t\t\t2.for know your current balance\n\n3.for withdraw cash\t\t\t\t4.for deposit amount\n\n\t\t\t\tpress =>  ");
  scanf("%d",&z);
  switch(z)
  {
    case 1: details();
    break;
    case 2 : balance();
    break;
    case 3: withdrawal();
    break;
    case 4 : deposit();
    break;
    default :
    printf("wrong input");
  }
  printf("\n\npress y for restart server\n");
  fflush(stdin);
  scanf("%c",&y);
  }while(y=='y' || y=='Y');
  
}
void details()
{
     long int num;
    char name[50],bank[50],ifsc[40],branch[20],city[20];
    printf("Account holder name => ");
    fflush(stdin);
    scanf("%[^\n]s",&name);
    fflush(stdin);
    printf("Bank => ");
    fflush(stdin);
     scanf("%[^\n]s",&bank);
    printf("Account number => ");
    scanf("%ld",&num);
    printf("IFSC Code => ");
    scanf("%s",&ifsc);
    printf("Bank Branch => ");
    scanf("%s",&branch);
    printf("City => ");
    scanf("%s",&city);
}
void balance()
{
    
    printf("your current balance is => %ld",amount);
}
void withdrawal()
{
 long int balance;
 printf("your current balance is => %ld\n",amount);
  printf("enter your withdrawal amount => ");
  scanf("%ld",&balance);
  if(balance>=0)
 {
    if(balance<amount)
  {
  printf("Withdrawal successful\nRemaining amount => %ld",amount-balance);
  }
  else
  {
    printf("insufficient balance");
  }
 }
 else
 {
 printf("negative amount");
 }
}
void deposit()
{
  long int deposit;
  printf("please enter your deposit amount => ");
  scanf("%ld",&deposit);
  if(deposit>=0)
  {
  
    printf("Deposit successful\nyour total balance is =>%ld",amount+deposit);
  }
  else
  {
    printf("Negative amount");
  }
}