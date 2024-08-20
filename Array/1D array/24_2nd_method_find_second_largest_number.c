#include<stdio.h>
#include<limits.h>
int main()
{
    int a[5],i,smax,max;
    max=INT_MIN;
    smax=INT_MIN;
    printf("enter your array elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(max<a[i])
        {
            smax=max;    //previous max value is second largest value
            max=a[i];    //new max value
        }
        else if(smax<a[i] && max!=a[i])
        {
            smax=a[i];
        }
    }

    printf("second largest number is :=%d",smax);
    return 0;

}