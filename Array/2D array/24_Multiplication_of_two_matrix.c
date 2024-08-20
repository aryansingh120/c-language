#include<stdio.h>
int main()
{
  int i,j,r,m,c,n;
  printf("enter first matrix rows and columns\n");
  scanf("%d%d",&r,&c);
  int a[r][c];
  printf("enter elements\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("first matrix is =\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  printf("enter second matrix rows and columns\n");
  scanf("%d%d",&m,&n);
  if(c==m)
  {

  int b[m][n],k;
  printf("enter elements\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  printf("second matrix is \n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",b[i][j]);
    }
    printf("\n");
  }
  printf("multiplication of matrix is =\n");
  int res[r][n];
  for(i=0;i<r;i++)
  {
    for(j=0;j<n;j++)
    { 
      res[i][j]=0;
      for(k=0;k<c;k++)
      {
        res[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",res[i][j]);
    }
    printf("\n");
  }
  }
  else
  printf("first matrix columns and second matrix rows are not equal\nso you can't multiply matrix");
  return 0;  
  }
