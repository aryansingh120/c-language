#include<stdio.h>
int main()
{
    int i,a[5],*p[5];
    printf("enter numbers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

     for(i=0;i<5;i++)
     {
        p[i]=&a[i];
        printf("%d\n",*p[i]);
     }

      return 0;
}