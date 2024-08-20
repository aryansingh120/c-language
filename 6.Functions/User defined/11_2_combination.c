#include<stdio.h>
int fact(int);
int combination(int,int);
int main()
{
  int n,r;
  printf("enter n value\n");
  scanf("%d",&n);
   printf("enter r value\n");
  scanf("%d",&r);

  printf("ncr is =%d",combination(n,r));
  
  

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
