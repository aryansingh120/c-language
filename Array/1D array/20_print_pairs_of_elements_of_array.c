/*program to read array elements and if sum of any elements freater then 12 ,
then print these elements*/
#include<stdio.h>
int main()
{
    int a[10],i,j,count=0;
    printf("enter your array elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
           if(a[i]+a[j]==12)
           {
           count++;
           printf("\n%d,%d",a[i],a[j]);
          }
        }
    }
    printf("\ntotal pair of numbers is:= %d",count);
    return 0;
}