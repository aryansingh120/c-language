#include<stdio.h>
int main()
{
    int a[5],i,j,swap,b;
    printf("enter number");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    
    }
    for(i=0;i<5;i++)
    
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }}
        for(i=0;i<5;i++)
        {
            printf("%d",a[i]);
        }
        
    
    return 0;
}