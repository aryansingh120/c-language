#include<stdio.h>
int main()
{
  int a[3][3],i,j,sum=0,k;
  printf("enter elements");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=i;j<3;j++)
    {
      sum+=a[i][j];
    }
  }
  printf("%d",sum);
  return 0;
}