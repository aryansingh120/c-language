#include<stdio.h>
int main()
{
    int i,n,product=1;
    printf("enter size of array:=");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        product*=a[i];
    }
    printf("\nProducts of all elements is %d",product);
}