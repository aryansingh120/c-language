#include<stdio.h>
int main()
{
    int n,sum=0,reminder;
    printf("enter number");
    scanf("%d",&n);
    while(n>0)
    {
        reminder=n%10;
        sum+=reminder;
        n/=10;
    }
    printf(" sum is = %d",sum);
    return 0;
}