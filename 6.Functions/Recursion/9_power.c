#include<stdio.h>
int power(int,int);
int main()
{
    int n,m;
    printf("enter the number and his power\n");
    scanf("%d%d",&n,&m);
   printf("ans is  =>  %d",power(n,m));
    return 0;
}
int power(int a,int b)
{
    
    if(a==0&&b>0)
    return 0;
    else if(a>0&&b==0)
    return 1;
    else
    return a*power(a,b-1);
}