#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b \n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping\na = %d\nb = %d",a,b);
    return 0;
}