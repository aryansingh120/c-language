#include<stdio.h>
int main()
{
  int x,y,c;
 int sum(int a,int b);
 c= sum(x,y);
  printf("sum is => %d",c);
  return 0;

}
int sum(int a,int b)
{
  
  printf("enter a and b value\n");
  scanf("%d%d",&a,&b);
  //printf("%d",a+b);
  return a+b;
}