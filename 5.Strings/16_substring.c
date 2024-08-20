#include<stdio.h>
int main()
{
   int i,j,count=0,s=1;
   char a[40];
   printf("enter string\n");
   //fgets(a,40,stdin);
   scanf("%s",&a);
   for(i=0;a[i]!='\0';i++)
   {
    count++;
   }
  // printf("%d\n",count);
  int n=count-1;
   for(i=1;i<=n+1;i++)
   {
     for(j=0;j<=n+1-i;j++)
     {
      int p=j+i-1;
      for(int k=j;k<=p;k++)
      {
      printf("%c",a[k]);
      
      
     }
      printf("\n");
   }
   }
return 0;
}
    