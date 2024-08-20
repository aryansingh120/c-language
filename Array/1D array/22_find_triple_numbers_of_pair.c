/*program to find triple values which is greter then 17 in array*/
#include<stdio.h>
int main()
{
    int a[8]={1,2,3,4,5,6,7,8},i,j,k;
    for(i=0;i<8;i++)
    {
        for(j=i+1;j<8;j++)              //for find first value
        {
            for(k=j+1;k<8;k++)           //for find second value
            {
            if(a[i]+a[j]+a[k]>17)           //for find third value
            {
                printf("%d,%d,%d\n ",a[i],a[j],a[k]);
            }
            }
        }
    }
    return 0;
}