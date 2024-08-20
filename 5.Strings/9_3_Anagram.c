#include<stdio.h>
int main()
{
    int i,j,count=0,alength=0,blength=0;
    char a[50],b[50];
    printf("enter first string => ");
    fgets(a,48,stdin);
     printf("enter second string => ");
    fgets(b,48,stdin);
    for(i=0;a[i]!='\n'&&a[i]!='\0';i++)
    {
        alength++;
    }
    //printf("length of first string => %d",alength);
      for(j=0;b[j]!='\n'&&b[j]!='\0';j++)
        {
            blength++; 
        }
       // printf("\nlength of second string => %d\n",blength);
if(alength==blength)
{
    for(i=0;a[i]!='\n'&&a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\n'&&b[j]!='\0';j++)
        {
            if(a[i]==b[j])   //ydi condition true ho to
            {
                count++;     //count++ ho jaye or
                b[j]=-1;      //b[j] ki jagah jo bhi element h uski jagah -1 ho jaye or
                break;         // j ka loop vhi pr break ho jaye or phir i ka loop aage badhe

            }
        }
    }
    if(count==alength)
    {
        printf("string is anagram");
    }
    else
     {
        printf("string is not anagram");
    }
}
else
{
    printf("length of both strings are not equal");
}
    return 0;
}