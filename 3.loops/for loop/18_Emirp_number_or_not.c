#include<stdio.h>
int main()
{
    int n,i,r,count=0,sum=0,flag=0;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(n%i==0)         //number ko check kiya h ki prime h ya nhi
       count++;
    }
    //if(count==2)
    //printf("prime");
    //else
   // printf("non prime");
   // printf("\nreverse number is =");
    while(n>0)
    {
        r=n%10;
    sum=(sum*10)+r;      //yha number ko reverse kiya h
        n/=10;
    }
    //printf("\n%d",sum);
    for(i=1;i<=sum;i++)
    {
        if(sum%i==0)       //reverse kiye gye number ko check kiya h ki prime h ya nhi
        flag++;         
    }
   // if(flag==2)
    //printf("\nprimee");
   // else
   // printf("\nnott");
    if(count==2&&flag==2)
    printf("\nemirp number");
    else
    printf("\nnon emirp");
    return 0;
}