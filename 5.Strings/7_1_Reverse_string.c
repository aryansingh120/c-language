#include<stdio.h>
int main()
{ 
    int x,count=0,i;
    printf("enter string size\n");
scanf("%d",&x);
    char a[x];
    printf("enter string\n");
    fflush(stdin);
    fgets(a,x,stdin);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
   // printf("%d",count);
    for(i=count-2;i>=0;i--)   //count-2 islie kiya h kyonki ek to array ka index n-1 hota h or dusra jab hum a[i] ki length 
     {                         //count krte h tab yah user dwara diye gye enter command ('\n')ko bhi count kr leta h to us enter
       printf("%c",a[i]);      // ko bhi is loop me count nhi krenge isle -2 kiya h
    }
    return 0;
    
}