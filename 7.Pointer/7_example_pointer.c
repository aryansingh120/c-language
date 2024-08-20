#include<stdio.h>
int main()
{
    int a,*p,**w,***y;
    printf("enter a: \n");
    scanf("%d",&a);
    p=&a;
    w=&p;
    y=&w;
    printf("address of a =>%p\n",p);
    printf("jo address p ne hold kr rakha h us address pr jo value pdi h => %d\n",*p);
    printf("jis address pr p pda h vo address vo h w=> %p\n",w);
    printf("p ke address pr jo address pda h=> %p\n",*w);
    printf("p ke address pr jo address h uske undar jo value h => %d\n",**w);
    printf("jis address pr w ka address pda h vo address h y=> %p\n",y);
    printf(" w ne jo address(p ka) hold kr rakha h=> %p\n",*y);
    printf("y ne jo address(w ka) hold kr rakha h us address pr jo address(p ka) h us address pr jo address(a ka) h us address pr jo value h=> %d\n",**y);
    return 0;
    }