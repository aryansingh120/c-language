#include<stdio.h>
int main()
{
    int a,b=0,c,reminder,p,square,sum=0;
    printf("enter number\n");
    scanf("%d",&a);
    b=a;
    square=a*a;
   // printf("square is => %d",square);
    while(square>0)
    {
        reminder=square%10;
       // printf("\n%d",reminder);
        sum+=reminder;;

        square/=10;
    }
    //printf("\n%d",sum);
    if(b==sum)
    {
    printf("\nneon number");
    }
    else
    {
    printf("not neon number");
    }
    return 0;
}