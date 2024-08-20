#include<stdio.h>
int main()
{
    int a,b,i,d;
    printf("enter number and his power\n");
    scanf("%d%d",&a,&b);
    d=a;
    if(a==0&&b==0)
    {
    printf("Ans is => undefined");
    }
    else 
    for(i=1;i<b;i++)
    {
    a=a*d;
    }
    printf("%d",a);

}