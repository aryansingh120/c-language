/*program to read an array elements,if elements are even then multiply by 2 and
 if element odd then increment by 10*/ 
#include<stdio.h>
int main()
{
    int a[5],i;
    printf("enter array elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Normal array is :=");
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nafter :=");
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            a[i]*=2;
            printf("%d ",a[i]);
        }
        else
        {
           a[i]+=10;
           printf("%d ",a[i]);
        }
    }
    return 0;
}