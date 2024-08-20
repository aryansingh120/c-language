#include<stdio.h>
int fact(int);
int main()
{
  int n,r,npr;
  printf("enter value of n =>");
  scanf("%d",&n);
  printf("enter value of r =>");
  scanf("%d",&r);
  npr=fact(n)/fact(n-r);
  printf("npr is = %d",npr);
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