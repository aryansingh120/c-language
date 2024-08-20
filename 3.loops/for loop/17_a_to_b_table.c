#include<stdio.h>
int main()
{
    int a,b,i,j,table;
    printf("enter elements");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=1;j<=10;j++)
        {
            table=i*j;
            printf("%d ",table);
        }
        printf("\n");
    }
return 0;
}