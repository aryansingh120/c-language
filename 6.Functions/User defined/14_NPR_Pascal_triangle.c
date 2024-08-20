#include<stdio.h>
int fact(int);
int permutation(int,int);
int main()
{
  int n,i,j;
  printf("enter value of n =>");
  scanf("%d",&n);
  printf("pascal triangle is =\n");
  for(i=0;i<=n;i++)
  {
    for(j=0;j<=i;j++)
    {
       printf("%d\t",permutation(i,j));
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
int permutation(int a,int b)
{
  int npr=fact(a)/fact(a-b);
  return npr;
}