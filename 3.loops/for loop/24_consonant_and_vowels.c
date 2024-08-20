#include<stdio.h>
int main()
{
    int i,count=0;
    char a[50];
    printf("enter string => ");
    fgets(a,48,stdin);
    for(i=0;a[i]!='\n'&&a[i]!='\0';i++)
    {
        if((a[i]>='a'&&a[i]<='z'))
        {
            if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')   //is condition ko uppar wale if me bhi && lgakar likh sakte h
           { 
            count++;
           }
           
        }
        
    }
    printf("Constant is => %d",count);
    return 0;
}