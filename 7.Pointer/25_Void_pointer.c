#include<stdio.h>
int main()
{
    int a=6;
    float b=8.3;
    char c='j';
    void *p;
    p=&a;
    printf("value of a is => %d\n",*((int*)p));
    p=&b;
    printf("value of a is => %f\n",*((float*)p));
    p=&c;
    printf("value of a is => %c\n",*((char*)p));
}