#include<stdio.h>
int main()
{
   int n,i=1,table;
   printf("enter number");
   scanf("%d",&n);
   while(i<=10)
   {
    table = i*n;
    i++;
   
    printf("%d ",table);
   }
   return 0;
   

}