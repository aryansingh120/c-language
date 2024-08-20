#include<stdio.h>
int main()
{
    int a,i,b,flag=0;
    printf("enter vaues");
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Not prime number");

    }
    else
    {
        printf("Prime number");
    }
    return 0;

}