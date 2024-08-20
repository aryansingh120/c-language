#include<stdio.h>
 #include<string.h>
int main()
{
    char a[50],b[50];
    printf("enter first string\n");
    //fgets(a,48,stdin);
    scanf("%[^\n]s",a);
     printf("enter second string\n");
     fflush(stdin);
    fgets(b,48,stdin);
    printf("After concatenate new string is => %s",strcat(a,b));

    return 0;
}