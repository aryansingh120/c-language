#include<stdio.h>
int main()
{
  int i;
  
   void *p;
   p=&i;
   for(i=65;i<=90;i++)
   {
    printf("%c ",*(char*)p);
   }


  return 0;
}