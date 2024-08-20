#include<stdio.h>
int main()
{
    int i,n,lcm;
    printf("enter number => ");
    scanf("%d",&n);
    if(n==1)
    printf("%d",n);
    else if(n==0)
    printf("%d",n);
    else     
    for(i=2;i<=n;i++)
    {
       if(n%i==0)
       {
        printf("%d ",i);
        n/=i;
        i--;
       }
    }
    return 0;
}