#include<stdio.h>
void num(int);
int main()
{
    int n;
    printf("enter value");
    scanf("%d",&n);
    num(n);
    return 0;
}
void num(int a)
{
    int b,c;
    if(a==0) return ;
    printf("%d ",a);
    num(a-1);
    printf("%d ",a);
}