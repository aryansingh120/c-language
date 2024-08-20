#include<stdio.h>
int main()
{
    int i,a,b,power=1;
    printf("enter the number and his power\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        power*=a;
    }
    printf("ans is => %d",power);
}