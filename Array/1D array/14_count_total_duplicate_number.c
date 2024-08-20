#include<stdio.h>
int main()
{
    int a[10],i,j,count=0;
    printf("enter array elements\n");
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
            if(a[i]==a[j])
            {
                count++;
                break;
                
            }
        }
    }
    printf("\nTotal duplicate value is = %d",count);
    return 0;
}