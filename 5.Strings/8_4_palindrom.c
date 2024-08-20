#include<stdio.h>
int main()
{
    int i,count=0,flag=0;
    char a[50];
    printf("enter string => ");
    fgets(a,48,stdin);
    for(i=0;a[i]!='\n'&&a[i]!='\0';i++)
    {
        count++;
    }
    //printf("length is => %d",count);
    for(i=0;i<count/2;i++)
    {
        if(a[i]!=a[count-i-1])  //count-i ka matlab ki string ke last word se cumpare or -1 islie kyonki array ka index n-1 hota h
        {
            flag++;
            break;
        }
    }
    if(flag==1)
    {
        printf("string not palindrom");
    }
    else
    {
         printf("string palindrom");
    }
    return 0;
}