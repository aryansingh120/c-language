#include<stdio.h>
int sum();
void mul();
int main()
{
 int j= sum();
   mul(j);
}
int sum()
{
  int a,b, c;
  printf("enter numbers\n");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("%d",c);
  return c;

}
void mul()
{
  int j,x;
  printf("enter num\n");
  scanf("%d",&x);
  printf("%d",j*x);
}
