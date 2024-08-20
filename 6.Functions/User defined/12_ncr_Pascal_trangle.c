#include<stdio.h>
int fact(int);
int combination(int,int);
int main()
{
  int n,i,j;
  printf("enter n value\n");
  scanf("%d",&n);
    printf("pascal triangle is =\n");
  for(i=0;i<=n;i++)
  {
    for(j=0;j<=i;j++)
    {
      printf("%d   ",combination(i,j));
    }
    printf("\n");
  }
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

int combination(int a,int b)
{
  int ncr=fact(a)/(fact(b)*fact(a-b));
  return ncr;
}
