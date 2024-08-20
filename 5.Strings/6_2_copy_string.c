#include<stdio.h>
int main()
{
    char a[10],b[10];
    int i;
    printf("enter string\n");
    fgets(a,10,stdin);
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';     //jab loop last time jab pura chala uske baad jo i++ hone pr b[i] me null value daal di
    printf("%s",b);
    return 0;
}