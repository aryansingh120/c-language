#include<stdio.h>
int main()
{
    int a,b,swap;
    printf("enter numbers\n");
    scanf("%d%d",&a,&b);
    swap=a+b;
    a=swap-a;
    b=swap-b;
    printf("After swap\nvalue of a is = %d\nvalue of b is = %d",a,b);
    return 0;
}