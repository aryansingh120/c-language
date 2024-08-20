#include<stdio.h>
#include<math.h>
int main()
{
    int a,c;
    float b;
    printf("enter num\n");
    scanf("%d",&a);
    c=a+1;
    b=sqrt(c);
    if(b==(int)b)
    printf("sunny number");
    else 
    printf("not sunny number");
    return 0;
}