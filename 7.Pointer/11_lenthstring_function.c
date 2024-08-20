#include<stdio.h>
int length(char*);
int main()
{
    
    char a[50];

    printf("enter string => ");
    fgets(a,48,stdin);
   printf("Length of string is => %d",length(a));
   
   return 0;

}
int length(char *b)
{
    int i,count=0;
    for(i=0;b[i]!='\n'&&b[i]!='\0';i++)
    {
       count++;
    }
    return count;
}