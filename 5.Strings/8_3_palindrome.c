#include<stdio.h>
int main()
{
   int i,j,count=0,flag=0;
   char a[20],b[20];
   printf("enter string\n");
    fgets(a,20,stdin);
     for(i=0;a[i]!='\0';i++)
   {
      count++;
   }
  // printf("length is %d",flag);
   for(i=0,j=count-2;a[i]!='\0',j>=0;i++,j--)
   {
      if(a[i]!=a[j])
      {
      flag++;
      break;
      }
   }
   if(flag==1)
   printf("not palindrome string");
   else
   printf("palindrome string");
   return 0;
}
/*isme sabse pahle string ki length count ki h 
  uske baad string array ko uske reverse string array se compare kiya h
  yadi string array or reverse array ka element same nhi h to flag++ ho jaye or loop vhi pr break ho jaye or yadi same h to
  loop chalta rhe */

  