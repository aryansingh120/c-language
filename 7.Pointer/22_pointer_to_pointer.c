#include<stdio.h>
int main()
{
   int a=10,*p,**w;
   p=&a;
   w=&p;
   printf("address of a => %p\n",p);
   printf("Value of a => %d\n",*p);
   printf("address of p => %p\n",w);
   printf("w ke andar jo address(p ka) h uske under jo address(a ka) h => %p\n",*w);
   printf("w ke andar jo address(p ka) h uske under jo address(a ka) us address pr jo value h => %d\n",**w);
    return 0;
}