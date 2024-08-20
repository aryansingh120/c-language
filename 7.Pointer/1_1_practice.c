#include<stdio.h>
int fun(int x,int y)
{
    return x+y;
}
int main()
{
    int a,b;
    printf("enter numbers\n");
    scanf("%d%d",&a,&b);
    fun(a,b);
    int (*p)(int,int)=&fun;
   printf("%d",(*p)(a,b));
}