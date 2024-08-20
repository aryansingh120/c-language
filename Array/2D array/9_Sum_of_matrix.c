#include<stdio.h>
int main()
{
  int a[3][3],i,j,b[3][3],c[3][3];
  printf("enter 1st matrix elements\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  printf("enter 2nd matrix elements\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d ",b[i][j]);
    }
    printf("\n");
  }
  printf("sum of 1st and 2nd matrix is \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
    c[i][j]=a[i][j]+b[i][j];
    printf("%d  ",c[i][j]);
  }
  printf("\n");
  }
  return 0;
}