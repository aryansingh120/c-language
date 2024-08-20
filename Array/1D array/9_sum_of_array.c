#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("enter the value");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);

return 0;

}