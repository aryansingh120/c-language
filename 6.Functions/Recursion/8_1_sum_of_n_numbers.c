#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("enter number => ");
    scanf("%d",&n);
    printf("sum is => %d",sum(n));
    return 0;
}

int sum(int a)
{
    int s;
    if(a>0)
    return a+sum(a-1);
    else 
    return 0;
}