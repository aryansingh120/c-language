#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter vaues");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("prime number");
    }
    else{
        printf("non prime number");
    }
    return 0;
}
