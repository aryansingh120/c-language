//program to write first 50 even numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter number\n");
    scanf("%d",&n);
    for(i=2;i<=2*n-1;i+=2)        //formula=2n-1
    {
        printf("%d ",i);
    }
    return 0;
}