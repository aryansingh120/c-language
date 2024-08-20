#include<stdio.h>
int sum(int *x,int *y);
int main()
{
    int a,b,p,*k;
    printf("enter numbers\n");
    scanf("%d%d",&a,&b);
    p=sum(&a,&b);
    k=&p;
    printf("sum is => %d\n",p);
    printf("address of sum is => %p",k);

    return 0;
}

int sum(int *x,int *y)
{
    return *x+*y;
}