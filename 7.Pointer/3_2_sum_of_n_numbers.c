#include<stdio.h>
int main()
{
    int n,i,*x,sum=0,*y;
    printf("enter number => ");
    scanf("%d",&n);
    x=&n;
    y=&sum;

    for(i=1;i<=*x;i++)
    {
        sum+=i;
    }
    printf("sum is => %d\n",sum);
    printf("address of sum => %p",y);
    return 0;
}