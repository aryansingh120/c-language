//program to copy the contents of one array into another array in the reverse order
#include<stdio.h>
int main()
{
    int a[5],b[5],i;
   printf("enter yours array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        b[i]=a[4-i];        // 4 islie liya h kyonki array ka index (n-1) tak hota h
    }
    for(i=0;i<5;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}