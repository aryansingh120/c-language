#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    printf("factorial is => %d",fact(n));
    return 0;
}
int fact(int a)
{
    int b;
    if(a==1 || a==0)                //yadi a==1 ho to 1 return ho jaye
return 1;
      b=a*fact(a-1);
    return b;
}