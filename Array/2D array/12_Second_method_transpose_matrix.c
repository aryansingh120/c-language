#include<stdio.h>
int main()
{
  int i,j,r,c;
  printf("enter matrix rows\n");
  scanf("%d",&r);
   printf("enter matrix columns\n");
  scanf("%d",&c);
  printf("enter matrix elements\n ");
  int a[r][c];
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
   for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  printf("transpose of matrix is=\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      
      int swap=a[i][j];
      a[i][j]=a[j][i];
      a[j][i]=swap;
    }
    
  }
  for(i=0;i<c;i++)
  {
    for(j=0;j<r;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }

  return 0;

}