#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    int *x=&a;
    int *y=&b;
    int *z=&c;
    if(*x>*y && *x>*z)
    printf("%d is greater and his address is =>%p",*x,x);
    else if(*y>*z)
   printf("%d is greater and his address is =>%p",*y,y);
    else
     printf("%d is greater and his address is =>%p",*z,z);
     return 0;
}