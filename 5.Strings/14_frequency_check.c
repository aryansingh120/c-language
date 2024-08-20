#include<stdio.h>
int main()
{
    int i,count=0,j;
    char a[40],b;
    printf("enter string\n");
    fgets(a,49,stdin);
     printf("enter that number you want to check frequency\n");
    scanf("%c",&b);
    for(i=0;a[i]!='\0';i++)
    {    
            if(a[i]==b)
            {
                count++;
            }
        
    }
    printf("frequency of %c is %d",b,count);
    return 0;
}