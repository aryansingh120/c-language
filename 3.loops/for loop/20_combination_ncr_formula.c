#include<stdio.h>
int main()
{
    int i,r,n,fact=1,fact_2=1,fact_3=1,formula;
    printf("enter vaalue of n => ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    //printf("factorial of %d is => %d\n",n,fact);
     printf("enter vaalue of r => ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        fact_2*=i;
    }
    //printf("factorial of %d ia => %d",r,fact_2);
   // printf("factorial of n-r is => ");
    for(i=1;i<=n-r;i++)
    {
        fact_3*=i;
    }
    // printf(" %d",fact_3);            //fact_3==(n-r)!
    formula = fact/(fact_2*(fact_3));      // formula=n!/r!*(n-r)!
    printf("result of combination is = %d",formula);
    return 0;
}