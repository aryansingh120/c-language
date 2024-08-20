#include<stdio.h>
int main()
{
   int a,b;
   printf("enter a and b");
   scanf("%d%d",&a,&b);
   int *c=&a;
   int *d=&b;
   int j=*c+*d;
   int *k=&j;
   printf("sum is => %d\n",j);
   printf("address of %d is %p",j,k);
  return 0;
}