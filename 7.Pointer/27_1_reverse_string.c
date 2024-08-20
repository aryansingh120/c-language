#include<stdio.h>
int main()
{
    char a[10],i,count=0,*p[10];
    printf("enter string => ");
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    for(i=count-1;i>=0;i--)
    {
        p[i]=&a[i];
        printf("%c",*p[i]);
        
    }
    return 0;
}