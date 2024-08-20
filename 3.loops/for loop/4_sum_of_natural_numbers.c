#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)          //  for(i=n;i>=1;i--)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}