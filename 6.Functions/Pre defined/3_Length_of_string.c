#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    printf("enter string\n");
    fgets(a,28,stdin);
    //scanf("%s",a);
   // strlen(a);
    printf("%d",strlen(a));
    return 0;
}