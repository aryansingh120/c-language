#include<stdio.h>
void details();
int balance();
int deposit(int);
void witdrawal(int);
long int j,p;
int main()
{ 
  int z;
  char ch;
  do
  {
    printf("press 1 for add\npress 2 for sub\npress 3 for mul\npress 4 for div\npress 5 for percent\n");
    printf("enter your choice\n");    
    scanf("%d",&z);
    switch(z)
    {
      case 1: details();
      break;
      case 2:  printf("opening balance%d",balance());
      break;
      case 3: j=balance();
       p=deposit(j);
       
      break;
      case 4:  
      
      withdrawal(p);
      break;
      default :
      printf("wrong input");
    }
    printf("do you want to continue");
    scanf("%s",&ch);
}while(ch=='y');
}
void details()
{
  char name[20],bank[20],code[20],branch[20],city[20],state[20];
  long int num[20];
  printf("Name =>");
  fflush(stdin);
  fgets(name,18,stdin);
  printf("Account Number =>");
  fgets(num,18,stdin);
  printf("Bank =>");
  fgets(bank,18,stdin);
  printf("IFSC Code =>");
  fgets(code,18,stdin);
  printf("Branch =>");
  fgets(branch,18,stdin);
  printf("City =>");
  fgets(city,18,stdin);
  printf("State =>");
  fgets(state,18,stdin);
}
int balance()
{
  long int amount=1000000;
  printf("current balance =>%ld\n",amount);
  return amount;
}
int deposit( int k)
{
   long int money,total;

   printf("enter deposit amount =>");
   scanf("%ld",&money);
   printf("Deposit successful\n");
   total=money+k;
   printf("current Balance =>%ld\n",total);
   return total;
}

void withdrawal( int s)
{
  long int withdraw;
  printf("enter withdrawal amount =>");
  scanf("%ld",&withdraw);
  printf("remaining amount =>%ld",s-withdraw);
}