#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter string size\n");
    scanf("%d",&n);
    char a[n];
    printf("enter string\n");
    fflush(stdin);
    fgets(a,n,stdin);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;a[k]!='\0';k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}