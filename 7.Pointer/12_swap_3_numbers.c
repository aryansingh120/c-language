#include<stdio.h>
 void swap(int*,int*,int*);
int main()
{
    int a,b,c;
    printf("enter a and b\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("after swapping\n");
    swap(&a,&b,&c);
    return 0;
}
 void swap(int *a,int *b,int *c)
{ 
   int swap=*a;
      *a=*c;
      *c=*b;
      *b=swap;
   printf("a =>%d\n",*a);
   printf("b =>%d\n",*b);
   printf("c =>%d",*c);
}