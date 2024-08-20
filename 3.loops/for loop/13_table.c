#include<stdio.h>
int main()
{
    int i,n,table;
    printf("enter number\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        table=n*i;
        printf("%d ",table);
    }
    return 0;
    
}