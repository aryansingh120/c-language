#include<stdio.h>
int main()
{
    char a[20],b[20];
    int i,j,count=1,length=0;    
    printf("enter String => ");
    scanf("%[^\n]s",a);
    //fgets(a,18,stdin);
    for(i=0;a[i]!='\0';i++)
    {
        length++;
        b[i]=a[i];
    }
    b[i]='\0';
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;b[j]!)
    }
   



    return 0 ;
}