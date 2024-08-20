#include<stdio.h>
void sum();
void sub();
void mul();
void div();
void percent();
int main()
{
    int z;
    char y;
    do
    {    
    printf("press 1 for add\npress 2 for sub\npress 3 for mul\npress 4 for div\npress 5 for percent\n");
    printf("enter your choice\n");    
    scanf("%d",&z);
     
    switch(z)
   {
   case 1: sum();
    break;
    case 2: sub();
    break;
    case 3: mul();
    break;
    case 4: div();
    break;
    case 5 : percent();
    break;
    default :
    printf("wrong input");
   }
   printf("\nif you want to restart then press y\n");
   fflush(stdin);
   scanf("%c",&y);
    } while(y=='y');
    

    
  }

void sum()
{
    int a,b;
     printf("enter two numbers\n");
   scanf("%d%d",&a,&b);
  
printf("the sum is %d",a+b);
}
void sub()
{
    int a,b;
     printf("enter two numbers\n");
   scanf("%d%d",&a,&b);
    printf("sub is %d",a-b);
}
void mul()
{
    int a,b;
     printf("enter two numbers\n");
   scanf("%d%d",&a,&b);
    printf("mul is %d",a*b);
}
void div()
{
    int a,b;
     printf("enter two numbers\n");
   scanf("%d%d",&a,&b);
    printf("div is %d",a/b);
}
void percent()
{
    int a,b;
     printf("enter two numbers\n");
     fflush(stdin);
   scanf("%d%d",&a,&b);
    printf("percent is %d",a%b);
}
