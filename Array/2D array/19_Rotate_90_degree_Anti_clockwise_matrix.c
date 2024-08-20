#include<stdio.h>
int main()
{
  int r,c,i,j;
  printf("enter rows and columns\n");
  scanf("%d%d",&r,&c);
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
  printf("90 degree anti clockwise rotate of matrix is=\n");
  for(i=c-1;i>=0;i--)
  {
    for(j=0;j<r;j++)
    {
      printf("%d ",a[j][i]);
    }
    printf("\n");
  }

  return 0;
}