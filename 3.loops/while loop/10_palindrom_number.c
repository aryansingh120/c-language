#include<stdio.h>

int main()
{
    int a,r,s=0,b;
    scanf("%d",&a);
    b=a;              //ye islie kiya h taaki baad me a ki real value ko compare kiya ja ske
    while(a>0)
    {
        r=a%10;
        s=(s*10)+r;
        a/=10;
    }
    if(s==b)
    printf("palindrom");
    else
    printf("not palindrom");
   
    return 0;
}  