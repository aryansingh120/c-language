#include<stdio.h>
int main()
{
  int i,j,swap;
  char a[59];
  printf("enter string\n");
  fgets(a,57,stdin);
  puts("reverse string is ");
  for(i=0;a[i]!='\0' && a[i]!='\n';i++)
  {
    for(j=i+1;a[j]!='\0' && a[j]!='\n';j++)
    {
      swap=a[i];
      a[i]=a[j];
      a[j]=swap;
    }
  }
   for(i=0;a[i]!='\0' && a[i]!='\n';i++)
  {
    printf("%c",a[i]);
  }
  return 0;
}