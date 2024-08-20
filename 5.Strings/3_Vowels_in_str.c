#include<stdio.h>
int main()
{
    char a[6];
    int i,count=0;
    printf("enter string\n");
    fgets(a,6,stdin);
    printf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a' ||a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
            count++;
    }
    printf("\nVowels in %s = %d",a,count);

    return 0;
}