#include<stdio.h>
#include<limits.h>
int main()
{
    int a[5],i,small;
    small=INT_MAX;        //small me integerki sabse badi value store h
    printf("ENTER YOURS ARRAY ELEMENTS");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<5;i++)
    {
        if(small>a[i])     // samall me jo value h yadi wah a[i] se badi h to 
        small=a[i];         //a[i] ki value small me chali jae
    }
    printf("smallest element of array is %d",small);
    return 0;
}