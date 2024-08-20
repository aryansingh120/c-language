#include<stdio.h>
int fact(int a);
int main()
{
  int i,n,z;
    printf("enter number\n");
    scanf("%d",&n);
    z=fact(n);
    printf("factorial of %d is => %d",n,z);
    return 0;
}
int fact(int a)
{
  int i,fact=1;
    
    for(i=1;i<=a;i++)
    {
        fact*=i;
    }
   return fact;


}


