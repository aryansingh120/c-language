#include<stdio.h>
int main()
{
    int a[5],i,g;
    printf("enter value");
    for(i=0;i<5;i++)

    {
        scanf("%d",&a[i]);
    }
       for(i=0;i<5;i++)

    {
        printf("%d\n",a[i]);
    }
   
    g=a[0];
    for(i=0;i<5;i++)
    {
        if(g<a[i])
        {
            g=a[i];
        }
    }
    printf(" greatest no%d\n",g);
    return 0;
}