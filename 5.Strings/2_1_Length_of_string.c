#include<stdio.h>
int main()
{
    char a[50];
    int i,count=0;
    printf("enter string\n");
    fgets(a,50,stdin);
    printf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
       count++;
    }
    printf("\nlength of %s is %d",a,count);
    return 0;
}