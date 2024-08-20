#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("enter string\n");
    fgets(a,48,stdin);
    printf("%s",strlwr(a));
    return 0;
    
}