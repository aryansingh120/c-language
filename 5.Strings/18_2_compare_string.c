#include<stdio.h>
int main()
{
    int i,j,count=0,length1=0,length2=0;
    char a[50],b[50];
    printf("enter first string =>");
    fgets(a,48,stdin);
    printf("enter second string => ");
    fgets(b,48,stdin);
    for(i=0;a[i]!='\n'&&a[i]!='\0';i++)
    {
        length1++;
    }
   // printf("length of first string => %d",length1);
     for(i=0;b[i]!='\n'&&b[i]!='\0';i++)
     {
        length2++;
     }
     // printf("\nlength of second string is => %d\n",length2);

    if(length1==length2)
    {
    for(i=0,j=0;a[i]!='\n'&&a[i]!='\0',b[j]!='\n'&&b[j]!='\0';i++,j++)
    {
        if(a[i]!=b[j])
        count++;
    }
    if(count==1)
    {
        printf("string not equal");
    }
    else  
      printf("string equal");
    }
    else
    printf("length not equal");
    return 0;
}