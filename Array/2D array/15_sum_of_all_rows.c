#include<stdio.h>
int main()
{
  int i,j,r,c,sum;
  printf("enter matrix rows\n");
  scanf("%d",&r);
  printf("enter matrix colums\n");
  scanf("%d",&c);
  int a[r][c];
  printf("enter matrix elements\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("matrix is =\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<r;i++)
  {
    sum=0;
    for(j=0;j<c;j++)
    {
      sum+=a[i][j];
    }
    printf("sum of %d row is=%d\n",i+1,sum);      //i+1 position k lie
  }
  return 0;
}