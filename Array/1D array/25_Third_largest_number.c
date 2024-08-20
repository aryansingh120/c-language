#include<stdio.h>
#include<limits.h>
int main()
{
    int a[5],i,max,smax,tmax;
    max=INT_MIN;
    smax=INT_MIN;
    tmax=INT_MIN;
    printf("enter yous array elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(max<a[i])
        max=a[i];
    }
     for(i=0;i<5;i++)
    {
        if(smax<a[i] && max!=a[i])
        smax=a[i];
    }
     for(i=0;i<5;i++)
    {
        if(tmax<a[i]&&max!=a[i]&&smax!=a[i])
        tmax=a[i];
    }
    printf("third largest number is :=%d",tmax);
    
}