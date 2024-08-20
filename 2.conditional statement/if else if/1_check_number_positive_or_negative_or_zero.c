#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is positive",a);
    }
    else if(a<0)
    {
        printf("%d is negative",a);
    }
    else
    {
        printf("%d is Zero",a);
    }
    return 0;
}