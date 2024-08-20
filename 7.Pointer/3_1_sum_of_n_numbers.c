#include<stdio.h>
int main()
{
    int n,i,*x,sum=0;
    printf("enter number => ");
    scanf("%d",&n);
    x=&n;

    for(i=1;i<=*x;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
}