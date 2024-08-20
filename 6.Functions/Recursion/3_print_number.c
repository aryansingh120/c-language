#include<stdio.h>
void num(int );
int main()
{ int n;
    printf("enter number\n");
    scanf("%d",&n);
    num(n);
}
void num(int a)
{
  if(a>0)
{
   num(a-1);
   printf("%d",a);
}
}