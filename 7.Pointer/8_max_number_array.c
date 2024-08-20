#include<stdio.h>
#include<limits.h>
int main()
{
    int i,a[5],*p[5],max;
    max=INT_MIN;
    printf("enter the number\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
         
    }
    for(i=0;i<5;i++)
    {
      p[i]=&a[i];
       if(*p[i]>max)
       max=*p[i];
      
    }
    printf("maximum number is => %d",max);
    
    return 0;

}