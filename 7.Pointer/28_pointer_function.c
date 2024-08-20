#include<stdio.h>
int sum(int x,int y)
{

    return x+y;
}
int main()
{
    int a,b;
    printf("enter numbers\n");
    scanf("%d%d",&a,&b);
    int (*p)(int,int);
    p=&sum;
    printf("%d",(*p)(a,b));
    return 0;
}