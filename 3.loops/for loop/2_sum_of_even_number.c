#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)              //for(i=n;i>=1;i--)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}