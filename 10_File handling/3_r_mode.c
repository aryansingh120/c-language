#include<stdio.h>
int main()
{
    int a =10;
    FILE *p;
    p=fopen("mode.txt","w");
    if(p==NULL)
    printf("file not created");
    else
    printf("file created");
    fclose(p);
    return 0;
}