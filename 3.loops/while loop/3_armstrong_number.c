#include<stdio.h>
int main()
{
    int a,reminder,b,s=0;
    printf("enter number");
    scanf("%d",&a);
    b=a;                  //b islie liya h kyonki neeche a ki value kam hoti ja rhi h loop ke andar 
                        //islie last me a ki original value ko compare krne k lie a ki value ko b me 
                        //assign kiya h
    while(a>0)
    {
        reminder=a%10; 
        s=s+reminder*reminder*reminder;    //s+=reminder*reminder*reminder
        a/=10;
    }
    printf("%d\n",s);
    if(s==b)
    {

    printf("armstrong");
    }
    else
    {

        printf("not armstrong number");
    }
    
}