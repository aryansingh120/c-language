#include<stdio.h>
int main()
{
   int n,i,fact=1;
   printf("enter number");
   scanf("%d",&n);
   i=n;
   while(i>=1)
   {
    fact*=i;
    i--;
   }
    printf("%d",fact);
   
   return 0;
   

}