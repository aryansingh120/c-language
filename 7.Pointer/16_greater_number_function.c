#include<stdio.h>
int large(int*,int*);
int main()
{
    int a,b;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    printf("greater number is => %d",large(&a,&b));
    return 0;
}
int large(int *x,int *y)
{
   if(*x>*y)
   return *x;
   else
   return *y;
}