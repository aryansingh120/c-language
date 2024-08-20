#include<stdio.h>
int sum(int x,int y)
{
  
  return (x+y);
}
int main()
{
int a,b,c;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("sum is =>%d",c);
return 0;
}
