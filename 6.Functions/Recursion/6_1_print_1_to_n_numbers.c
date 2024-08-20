#include<stdio.h>
void num(int,int);
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    num(1,n);
    return 0;
}
void num( int x,int a)
{
    
     if(x>a)
     return ;
     printf("%d",x);
     num(x+1,a);
}