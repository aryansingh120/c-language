#include<stdio.h>
int main()
{
   int a,b,i,c,count=0;
   printf("enter numbers\n");
   scanf("%d%d",&a,&b);
   if(a<=b)
   c=a;
   else
   c=b;

   for(i=c;i>=1;i--)
   {
    if(a%i==0&&b%i==0)
    {
    count=i;
    break;
   
    }
   }
    printf("%d ",count);
    return 0;
}