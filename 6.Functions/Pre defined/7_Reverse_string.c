#include<stdio.h>
#include<string.h>
int main()
{
   char a[50];
   printf("enter string\n");
  scanf("%[^\n]s",a);
   //fgets(a,48,stdin);
   printf("Reverse string is =>%s",strrev(a));




    return 0;
}