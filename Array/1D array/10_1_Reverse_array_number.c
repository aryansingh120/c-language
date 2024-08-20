#include<stdio.h>
int main()
{
    int a[5],i;
    printf("print numbers");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array number is \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nreverse numbers is \n");
     for(i=4;i>=0;i--)
     {
        printf("%d ",a[i]);
     }



    return 0;
}