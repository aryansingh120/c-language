#include<stdio.h>
#include<limits.h>
int main()
{
  int i,j,r,c,sum=0,max,index;
  max=INT_MIN;
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
  {sum=0;
    for(j=0;j<c;j++)
    {
      sum+=a[i][j];
      }
      if(max<sum)
      {
         max=sum;
         index=i;
      }
  }

    printf("maximum sum is = %d of %d row",max,index+1);

return 0;
}