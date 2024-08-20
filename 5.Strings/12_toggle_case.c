#include<stdio.h>
int main()
{
   int i;
   char a[50];
   printf("enter string\n");
   fgets(a,50,stdin);
   for(i=0;a[i]!='\0';i++)
   {
      if(a[i]>='a' && a[i]<='z')
      {
         printf("%c",a[i]-32);
      }
      else if(a[i]>='A' && a[i]<='Z')
      {
         printf("%c",a[i]+32);
      }
      else
      {
      printf("%c",a[i]);
      }
   }
   return 0;
}