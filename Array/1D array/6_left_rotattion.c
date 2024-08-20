#include<stdio.h>
int main()
{
    int a[5],i,b,j;
    printf("enter value");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for( j=0;j<2;j++)            //this loop for rotate number
    {
b=a[0];
    for(i=0;i<5;i++)
    {
       a[i]=a[i+1];
    }
    }
   
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}