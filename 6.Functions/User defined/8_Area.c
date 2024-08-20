#include<stdio.h>
void area();
int square();
int main()
{
   int j=square();
   area(j);
}
void area()
{
  int j;
  printf("area is %f",3.14*j) ;
}
int square()
{
  int r,a;
  printf("enter value\n");
  scanf("%d",&r);
  a=r*r;
  //printf("%d",a);
  return a;


}