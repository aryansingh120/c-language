#include<stdio.h>
int main()
{
    int n,last_digit,b;
    printf("enter number\n");
    scanf("%d",&n);
    //b=n;
    last_digit=n%10;
     n/=10;
     while(n>=10)
     {
        n/=10;
     }
     printf("first digit is %d\n",n);
     printf("Last digit is %d\n",last_digit);

}