#include<stdio.h>
int main()
{
    int a[20],i,n,sum=0,b,sum2;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter sum of array\n ");
    scanf("%d",&b);
    printf("enter array elements");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
         sum+=a[i];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
    }
    sum2=b-sum;
    printf("missing element is = %d",sum2);
    return 0;
}