#include<stdio.h>
int main()
{
    int n,i,reminder;
    printf("enter number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        reminder=n%10;
        printf("%d",reminder);
        n/=10;
    }
    return 0;
}