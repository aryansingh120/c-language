#include<stdio.h>
int main()
{
    int i,j,count=0,length1=0,length2=0;
    char a[50],b[50];
    printf("enter first string =>");
    fgets(a,48,stdin);
    printf("enter second string => ");
    fgets(b,48,stdin);
    for(i=0;a[i]!='\n'&&a[i]!='\0';i++);
    printf("length of first string => %d",i);
     for(j=0;b[j]!='\n'&&b[j]!='\0';j++);
    printf("\nlength of second string is => %d\n",j);

    if(i==j)
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