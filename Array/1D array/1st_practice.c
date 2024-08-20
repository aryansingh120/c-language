#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    int b=39;
    int *c=&b;
    printf("%p",c);
    printf("\n%p",p);
    printf("\n%d",*(p-1));
    return 0;
}