#include<stdio.h>
int main()
{
    int a,r,fact,i,sum=0,j,b;
    printf("enter number\n");
    scanf("%d",&a);
    b=a;

    while(a>0)
    {
        fact=1;
        r=a%10;
        
    for(i=1;i<=r;i++)
    { 
    
        fact*=i;

    }
    // printf("factorial of %d is %d\n",r,fact);
         a/=10;
         sum+=fact;          //is line me sabhi factorial ko sum kiya h
    }
    //printf("\ntotal is=%d",sum);
    if(sum==b)
    printf("\nnumber is patterson");
    else
    printf("\nnot patterson number");
           

    return 0;





    }