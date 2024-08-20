#include<stdio.h>
int main()
{
    int a[10],i,n,count=0;
    printf("enter array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nenter that number you want to check frequency\n");
    scanf("%d",&n);
        for(i=0;i<5;i++)
        {
            if(a[i]==n)
            {
              count++;
            }
        }
    printf("Frequency of %d is = %d\n",n,count);
    return 0;
    
}
