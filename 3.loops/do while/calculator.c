#include<stdio.h>

int main()
{
char z,e='y';
int a,b;
    do
    {
       printf("enter a for add\npress b for sub\npress c for mul\npress d for div\n") ;
      
      printf("enter choice\n");
        scanf("%s",&z);
       
       printf("enter a and b\n");
       scanf("%d%d",&a,&b);
       switch(z)
       {
           case 'a':
           printf("%d",a+b);
           break;
           
           case 'b':
           printf("%d",a-b);
           break;
           
           case 'c':
           printf("%d",a*b);
           break;
           
           case 'd':
           printf("%d",a/b);
           break;
           default:
           printf("error");
       }
       printf("press e to run again\n");
       
       scanf("%s",&e);
    }
    while(e=='y');
      return 0;
       }
       