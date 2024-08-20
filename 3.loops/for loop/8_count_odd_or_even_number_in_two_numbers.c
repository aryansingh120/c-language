#include<stdio.h>
int main()
{
    int a,b,i,even=0,odd=0;
    printf("enter numbers");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("total Even number between %d and %d = %d\n",a,b,even);
    printf("total Odd number etween %d and %d  = %d",a,b,odd);
    }
    else
    {
        for(i=a;i>=b;i--)
    {
        if(i%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("total Even number between %d and %d = %d\n",a,b,even);
    printf("total Odd number between %d and %d  = %d",a,b,odd);
    }
    
    
   

    return 0;
}