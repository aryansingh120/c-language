#include<stdio.h>
#include<string.h>
int main()
{ int j,c;
    char a[50],b[50];
    printf("enter first string\n");
    fgets(a,48,stdin);
     printf("enter second string\n");
    fgets(b,48,stdin);
    printf("enter that number of character you want to compare => ");
    scanf("%d",&c);
    j=strncmp(a,b,c);
    printf("difference between strings is => %d so ",j);
    if(j==0)
    {
        printf("strings are equal");
    }
    else
    {
        printf("strings are not equal");
    }
return 0;
}