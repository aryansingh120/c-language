#include<stdio.h>
int main()
{
   int i,count=0;
   char a[10];
   printf("enter string\n");
   fgets(a,10,stdin);
   for(i=0;a[i]!='\0';i++)
   {
      if(a[i]>='A'&&a[i]<='Z')
      {
         printf("%c",a[i]+32);
      }
   }
   
   return 0;
}