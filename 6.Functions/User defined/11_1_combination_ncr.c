#include<stdio.h>
int fact(int);
int main()
{
  int n,r,ncr;
  printf("enter value of n =>");
  scanf("%d",&n);
  //printf("factorial of %d is %d",n,fact(n));
  printf("\nenter value of r =>");
  scanf("%d",&r);
  //printf("factorial of %d is %d\n",r,fact(r));
   //printf("factorial of n-r is %d",fact(n-r));
   ncr=fact(n)/(fact(r)*fact(n-r));
    printf("\nncr is => %d",ncr);
   

  
  return 0;
}
int fact(int a)
{
  int i,fact=1;
  for(i=2;i<=a;i++)
  {
    fact*=i;
  }
  return fact;
}