#include<stdio.h>
int main()
{
   int n,i=1,fact=1;
   printf("enter number");
   scanf("%d",&n);
   while(i<=n)
   {
    fact*=i;
    i++;
   }
    printf("%d",fact);
   
   return 0;
   

}