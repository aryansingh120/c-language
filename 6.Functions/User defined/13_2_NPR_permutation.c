#include<stdio.h>
int fact(int);
int permutation(int,int);
int main()
{
  int n,r,npr;
  printf("enter value of n =>");
  scanf("%d",&n);
  printf("enter value of r =>");
  scanf("%d",&r);
  printf("npr is = %d",permutation(n,r));
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
int permutation(int a,int b)
{
  int npr=fact(a)/fact(a-b);
  return npr;
}