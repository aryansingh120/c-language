#include<stdio.h>

    int main()
    {
        int i,j,a[5],swap;
        printf("enter array elements\n");
        for(i=0;i<5;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<5;i++)
        {
            for(j=i+1;j<5;j++)
            {
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }
        printf("Reverse array is = ");
         for(i=0;i<5;i++)
        {
            printf("%d ",a[i]);
        }
        return 0;
    }
