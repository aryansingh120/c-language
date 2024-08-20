#include<stdio.h>
int main()
{
    char a[10],i,count=0,b[10],*p[10];
    printf("enter string => ");
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
       
    }
     printf("%d\n",count);
    for(i=0;i<count;i++)
    {
         b[i]=a[count-1-i];
         p[i]=&b[i];
       
        printf("%c",*p[i]);
        
    }
    return 0;
}