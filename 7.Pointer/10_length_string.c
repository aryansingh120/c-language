#include<stdio.h>
int main()
{
    int i,count=0,*p;
    char a[50];
    p=&count;
    printf("enter string => ");
    fgets(a,48,stdin);
    for(i=0;a[i]!='\n'&&a[i]!='\0';i++)
    {
    
        count++;
    }
    printf("Length is => %d",*p);

}