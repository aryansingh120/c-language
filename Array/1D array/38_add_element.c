#include<stdio.h>
int main()
{
    int n,i,b,c;
    printf("enter array size => ");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter that that position number where you want to add number=> ");
    scanf("%d",&b);
    printf("enter that number you want to insert in array => ");
    scanf("%d",&c);
    for(i=n-1;i>=b-1;i--)
    {
        a[i+1]=a[i];

    }
    a[b-1]=c;
     for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
    }