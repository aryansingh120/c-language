#include<stdio.h>
int main()
{
  int y=200;
  const int x = y;
  x=10;
   printf("%d",x);       //output = error
  return 0;
}