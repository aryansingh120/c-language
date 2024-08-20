#include<stdio.h>
int main()
{
    int j,n,i,count=0,p,k;
    char a[50],b[50];
    printf("enter string => ");
    fgets(a,48,stdin);
    printf("enter number => ");
    scanf("%d",&n);
    for(i=0;a[i]!='\n'&&a[i]!='\0';i++)
    {
       count++;
    }
    printf("length is = %d\n",count);
    p=count/n;
    for(i=0;i<count;i++)
    {
        printf("%c",a[i]);
        if((i+1)%p==0 && (i+1)!=count)
        { 
             printf("\n");
        }
       
    }
    return 0;
}