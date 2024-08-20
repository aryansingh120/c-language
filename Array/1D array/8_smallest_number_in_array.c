#include<stdio.h>
int main()
{
    int a[5],i,g;
    printf("enter values");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    g=a[0];
    for(i=0;i<5;i++)
    {
        if(g>a[i])
        g=a[i];
    }
    printf("\nsmallest number is = %d",g);
    return 0;
}