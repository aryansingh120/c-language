#include<stdio.h>
void australia();
void england();
void america();
void kishanpura();
int main()
{
   printf("you are in india\n");
   australia();
   return 0;
}
void australia()
{
    printf("you are in australia\n");
    england();
}
void england()
{
   printf("you are in england\n");
   america();
}
void america()
{
   printf("you are in america\n");
   kishanpura();
}
void kishanpura()
{
      printf("NOW YOU ARE IN UNITED STATES OF KISHANPURA\n");
}