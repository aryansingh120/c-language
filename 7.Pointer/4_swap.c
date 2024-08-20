#include<stdio.h>
int main()
{
    int a,b,swap,*x,*y;
    printf("enter value of a and b\n");
    scanf("%d%d",&a,&b);
    x=&a,y=&b;
    printf("before swapping\n");
    printf("a => %d  and addess is => %p\n",a,x);
    printf("b => %d  and addess is => %p\n",b,y);
    swap=x;
    x=y;
    y=swap;
    printf("After swapping\n");
    printf("a => %d  and address is => %p\n",*x,x);
    printf("b => %d  and address is => %p\n",*y,y);

}