#include<stdio.h>
int sum()
{
    static int a=0;
    return a++;

}
int main()
{
   printf("%d\n",sum());
    printf("%d\n",sum());
     printf("%d",sum());
   return 0;

}