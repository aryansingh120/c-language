#include<stdio.h>
int main()
{
    int a[5],i;
    printf("enter numbers");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Value\tindex\tposition\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
        printf("%d\t",i);
        printf("%d\t",i+1);
        printf("\n");
    }
    return 0;
}