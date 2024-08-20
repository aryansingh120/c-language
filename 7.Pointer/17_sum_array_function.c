#include<stdio.h>
int sum(int*);
int main()
{
    int i,a[5];
    printf("enter array elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sum of array is => %d",sum(a));
    return 0;
}
int sum(int *b)
{
    int i,sum=0,*p ;
    p=&sum;
    for(i=0;i<5;i++)
    {
        *p+=b[i];
    }
    return *p;
}

