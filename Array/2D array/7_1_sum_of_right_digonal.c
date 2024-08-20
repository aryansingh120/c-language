#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("enter array elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("array is =\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0,j=2;i<3,j>=0;i++,j--)    //ek baar i chalega or ek baar j chalega
        {
            sum+=a[i][j];
        }
    
    printf("\nsum of right digonal is = %d",sum);
    return 0;
    }