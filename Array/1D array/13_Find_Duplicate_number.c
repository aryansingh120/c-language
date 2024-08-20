#include<stdio.h>
int main()
{
    int a[10],i,j;
    printf("enter array elements");
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
        
             printf("\nDuplicate value is = %d",a[i]);
                break;
            }
        }
    }
    
    return 0;
}