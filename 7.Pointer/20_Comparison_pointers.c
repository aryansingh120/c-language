#include<stdio.h>
int main()
{
     int a=10,*p1,*p2;
    p1=&a,p2=&a;;
    
    if(p2==p2)
   {
    printf("both pointers point the same memory location");
   }
   else
   {
    printf("both pointers not point the same memory location");
   }

    return 0;
}