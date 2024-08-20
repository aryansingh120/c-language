#include<stdio.h>
int main()
{
    int a=20;
    int *p1=&a;
    int *p2;
    int *p3=0;
    int *p4=NULL;

    if(p1==0)
    printf("p1 is null\n");
    else  
    printf("p1 is not null\n");

    if(p2==0)
    printf("p2 is null\n");
    else  
    printf(" p2 is not null\n");

    if(p3==0)
    printf("p3 is null\n");
    else  
    printf(" p3 is not null\n");

    if(p4==0)
    printf("p4 is null\n");
    else  
    printf(" p4 is not null\n");
    return 0;
}
