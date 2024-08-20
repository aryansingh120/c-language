#include<stdio.h>
int main()
{
    int n,i,sum=0,reminder;
    printf("enter number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        reminder=n%10;
        sum+=reminder;
        n/=10;
    }
    printf("Sum is = %d",sum);
    return 0;

}