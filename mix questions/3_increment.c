#include<stdio.h>
int main()
{
    int a=1;
    while(a<=1)
    if(a%2)
    printf("%d",a++);
    else
    printf("%d",++a);
    printf("%d",a+10);
    return 0;
}