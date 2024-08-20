/*program to difference between sum of odd numbers and sum of even numbers */
#include<stdio.h>
int main()
{
    int a[5],i,sum=0,summ=0;
    printf("enter your array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
             sum+=a[i];
        }
        else{
            summ+=a[i];
        }
    }
    printf("\nsum of odd number is:= %d\n",sum);
    printf("sum of even number is:= %d\n",summ);
    printf("Difference between sum of odd and sum of even is:= %d",sum-summ);
    return 0;

          
}