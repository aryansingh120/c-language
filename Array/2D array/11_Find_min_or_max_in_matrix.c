#include<stdio.h>
#include<limits.h>
int main()
{
  int max,min,i,j,a[3][3];
  max=INT_MIN;
  min=INT_MAX;
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
      printf("%d",a[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(max<a[i][j])
      max=a[i][j];
    }

  }
  printf("Maximum vslue is %d",max);
   for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(min>a[i][j])
      min=a[i][j];
    }

  }
  printf("\nMinimum vslue is %d",min);
  return 0;
}