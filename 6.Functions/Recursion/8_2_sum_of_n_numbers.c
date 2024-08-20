#include<stdio.h>
void sum(int,int);
int main()
{
    int p,n;
    printf("enter number => ");
    scanf("%d",&n);
    sum(n,0);
    // printf("sum is => %d",p);
    return 0;
}

void sum( int a,int s)
{
    
    if(a==0) 
    {
        printf("%d",s);
        return ;
    }
    sum(a-1,a+s);
   return;

    
}
    