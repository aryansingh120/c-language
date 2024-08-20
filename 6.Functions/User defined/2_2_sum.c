#include<stdio.h>
void sum();
int main()
{
  int x,y;
   printf("enter numbers\n");
   scanf("%d%d",&x,&y);
   sum(x,y);
}
void sum(int a, int b)
{
  printf("%d",a+b);
}
