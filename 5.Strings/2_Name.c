#include<stdio.h>
int main()
{
    char a[10];
   
    printf("enter string\n");
    fgets(a,10,stdin);
    printf("%s",a);
    return 0;
}