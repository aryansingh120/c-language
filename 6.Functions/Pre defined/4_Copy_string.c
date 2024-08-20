#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    printf("enter first string\n");
    fgets(a,48,stdin);
    printf("%s",strcpy(b,a));
    return 0;


}