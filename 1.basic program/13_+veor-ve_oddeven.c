#include<stdio.h>
#include<math.h>
int main()
{
   int n;
   printf("enter number => ");
   scanf("%d",&n);
   if(n>=0&&n%2==0)
   printf("positive, even");
   else if(n>=0&&n%2!=0)
   printf("positive, odd");
   else if(n<0&&n%2==0)
   printf("negetive, even");
   else if(n<0&&n%2!=0)
   printf("negetive, odd");


    
    return 0;
}