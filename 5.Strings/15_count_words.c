#include<stdio.h>
int main()
{
    int i,count=1;
    char a[100];
    printf("enter string\n");
    fgets(a,98,stdin);
    for(i=0;a[i]!='\0' && a[i]!='\n';i++)
    {
        if(a[i]==' ')
        count++;
       // if(a[i]>='a' && a[i]<='z')
        
    }
    printf("Number of words is = %d",count);
    return 0;
}