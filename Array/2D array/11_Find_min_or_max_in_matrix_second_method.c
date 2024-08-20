#include<stdio.h>
int main()
{
  int g,i,k,j,a[3][3];
  printf("enter matrix elements\n");
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
      printf("%d  ",a[i][j]);
    }
    printf("\n");
  }
      g=a[0][0];

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(g<a[i][j])
      g=a[i][j];
    }

  }
  printf("maximum value is %d",g);
  k=a[0][0];
  for(i=0;i<3;i++)
  {
    
    for(j=0;j<3;j++)
    {
      if(k>a[i][j])
      k=a[i][j];
    }

  }
  printf("\nminimum value is %d",k);
  return 0;
}