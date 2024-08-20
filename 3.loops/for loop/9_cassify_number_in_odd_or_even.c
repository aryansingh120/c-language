#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter numbers\n");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            printf("%d is Even number\n",i);
        }
        else
        {
            printf("%d is Odd number\n",i);
        }
    }return 0;
}
