#include<stdio.h>
int main()
{
    char a[20];
    int i,j;
    printf("enter string=> ");
    scanf("%[^\n]s",&a);
    printf("duplicate characters are => ");
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                printf("%c ",a[i]);
                break;
            }
        }

    }
    return 0;
}