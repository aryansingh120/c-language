#include<stdio.h>
#
int main()
{
    int i,n;
    printf("enter number => ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
         if(n%i==0)
       {
        printf("%d ",i);
        n/=i;
        i--;
       }
    }
}