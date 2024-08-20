#include<stdio.h>
int main()
{
    int a[5],i,j,swap,n;
    printf("enter yours array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("what is smallest number you want to print");
    scanf("%d",&n);

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }
    }
    printf("smallest number is =%d",a[n]);
    return 0;
}