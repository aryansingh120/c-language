#include<stdio.h>
int main()
{
   int i,j,flag=0,count=0;
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
      if(a[i]==a[j])
      flag++;
   }
   if(flag==count-1)
   printf("palindrome string");
   else
   printf("not palindrome string");
   return 0;
}
/*isme sabse pahle string ki length count ki h 
  uske baad string array ko uske reverse string array se compare kiya h
  yadi string array or reverse array ka element same h to flag++ ho jaye
  or yadi sabhi elements equal h to flag ki value uski length k braber hogi
  count-1 me  1 kam islie chalaya h kuonki yah user dwara diye gye enter command ko bhi string me count kr leta h
  isle us enter comand ko kam krne k lie count-1 kiya*/