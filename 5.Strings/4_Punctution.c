#include<stdio.h>
int main()
{
    char a[6];
    int i,count=0;
    printf("you can use only @,#,*,$,& as special character\n");
    printf("enter string\n");
    fgets(a,6,stdin);
    printf("%s",a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='@' || a[i]=='#' || a[i]=='*' || a[i]=='$' || a[i]=='&')
        count++;
    }
    printf("\nspacial char in %s is = %d",a,count);
    return 0;
}