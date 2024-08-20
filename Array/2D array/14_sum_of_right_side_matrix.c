#include<stdio.h>
int main()
{
  int a[5][5],i,j,sum=0;
  printf("enter matrix elements\n");
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      printf("%d   ",a[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<4;i++)
   {
    for(j=1;j<5;j++)
    {
      sum+=a[i][j];
    }
   }
   printf("sum is = %d",sum);
   return 0;
}