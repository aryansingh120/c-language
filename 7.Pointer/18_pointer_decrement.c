#include<stdio.h>
int main()
{
    int x=2,*y;
    y=&x;
    printf("\naddress of x => %p\n",y);
    printf("address of x-1 => %p\n",y-1);
    float i=1.2,*p;
    p=&i;
   
    printf("\naddress of i => %p\n",p);
    printf("address of i-1 => %p\n",p-1);
     char a='a',*ch;
    ch=&a;
    printf("\naddress of ch => %p\n",ch);
    printf("address of ch-1 => %p\n",ch-1);
    double b=199,*s;
    s=&b;
    printf("\naddress of b => %p\n",s);
    printf("address of b-1 => %p\n",s-1);
    return 0;
}
