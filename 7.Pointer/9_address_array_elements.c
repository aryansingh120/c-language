#include<stdio.h>
int main()
{
    int i,a[5],*p[5];
    printf("enter number\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<5;i++)
    {
        p[i]=&a[i];
        printf("address of %d is => %p\n",*p[i],p[i]);
    }
    return 0;

}