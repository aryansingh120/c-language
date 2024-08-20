#include<stdio.h>
void num(int);
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    num(n);
    return 0;

}
void num(int a)
{
   if (a>0)
   {
    printf("%d ",a);
    num(a-1);
   }
    
}