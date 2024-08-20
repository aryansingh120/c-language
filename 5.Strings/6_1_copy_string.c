#include<stdio.h>
int main()
{
    char a[10],b[10];
    int i;
    printf("enter string\n");
    fgets(a,10,stdin);
    int j=0;
    for(i=0;a[i]!='\0';i++)
    {
          b[j]=a[i];
          j++;
    }
    
    b[j]='\0';
    printf("%s",b);
    return 0;
}