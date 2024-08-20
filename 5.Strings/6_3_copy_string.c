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
   //printf("%d",count);
   for(i=0;i<count;i++)   //oop ko first string ki length se 1 kam tak chalaya h or
   {                      // 1 kam islie chalaya h kuonki yah user dwara diye gye enter command ko bhi string me count kr leta h
      b[i]=a[i];
      
   }
   b[i]='\0';
   printf("%s",b);
   
  
   return 0;
}