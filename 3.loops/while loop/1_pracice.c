#include<stdio.h>
int main()
{
    int n,a,b,c,d,i;
    char j[20];
     
    printf("enter number => ");
    scanf("%d",&n);
    a=n*2;
    b=n*3;
    d=n+a+b;
   for(i=0;i<3;i++)
   {
    j[i]=(char)n;
    printf("%c",j[i]);
   }
    return 0;
    
    
}