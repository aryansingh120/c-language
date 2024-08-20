#include <stdio.h>
int main() {
   int a[5],i,count=0,flag=0;
   printf("enter numbers");
   for(i=0;i<5;i++)
   {
    scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++)
   {
    if(a[i]>0)
    {
        printf("%d is positive\n",a[i]);
    count++;
    }
    else
    {
        printf("%d is negative\n",a[i]);
    flag++;
    }
   }
   printf("positive numbers is => %d\n",count);
   printf("negative numbers is => %d",flag);
    return 0;
}
