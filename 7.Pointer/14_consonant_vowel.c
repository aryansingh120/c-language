#include<stdio.h>
void alphabet(char *n);
int main()
{
    char a[50];
    printf("enter string => ");
    fgets(a,48,stdin);
    alphabet(a);
    
    return 0;
}
void alphabet(char *n)
{ 
    int count=0,i,flag=0;
     char *p[50];
     for(i=0;n[i]!='\n'&&n[i]!='\0';i++)
     {
        p[i]=&n[i];
        if(*p[i]>='a'&&*p[i]<='z')
        {
            if(*p[i]=='a'||*p[i]=='e'||*p[i]=='i'||*p[i]=='o'||*p[i]=='u')
            {
            count++;
            }
            else
            {
                flag++;
            }

        }
     }
     printf("Vowels is => %d\n",count);
     printf("Consonant is => %d",flag);
}