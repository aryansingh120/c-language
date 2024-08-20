#include<stdio.h>
int main()
{
    char a[10],b[10];
    int i,count=0;
    printf("enter string\n");
    fgets(a,10,stdin);
    printf("enter second string\n");
    fgets(b,10,stdin);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
        count++;
        break;
        }
    }
    if(count==1)
    printf("string not equal");
    else
    printf("string equal");
    return 0;
}