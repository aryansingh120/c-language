#include<stdio.h>
#include<limits.h>
int main()
{
    int a[5],i,small,ssmall;
    small=INT_MAX;
    ssmall=INT_MAX;
    printf("enter yours array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(small>a[i])
        small=a[i];
    }
    for(i=0;i<5;i++)
    {
        if(ssmall>a[i]&&small!=a[i])     //yadi ssmall ki value a[i] se badi h to 
        ssmall=a[i];                    //a[i] ki value ssmall me store hojaye lekin a[i]
    }                               //a[i] ki value small ke brabar nhi honi chaiye 
    printf("second smallest number is %d",ssmall);
    return 0;
}