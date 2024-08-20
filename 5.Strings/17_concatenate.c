#include<stdio.h>
int main()
{
   int i,count=0;
   char a[50],b[50];
   printf("enter first string\n");
   fgets(a,48,stdin);
   //scanf("%s",a);
   printf("enter second string\n");
  fgets(b,48,stdin);
   //scanf("%s",b);
   for(i=0;a[i]!='\0'&&a[i]!='\n';i++)
   {
    count++;
   }
   printf("%d",count);
   for(i=0;b[i]!='\0'&&b[i]!='\n';i++)
   {
    a[count]=b[i];
    count++;
   }
   a[count]='\0';
   printf("%s",a);
   return 0;

}