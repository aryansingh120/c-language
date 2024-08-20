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
  printf("after convert into wave  matrix rowwise =\n");
  //normal matrix ko wave matrix me convert krne pr even rows(0,2,4,6...) to same print hoti h lekin odd rows(1,3,5...)
  // reverse prin thoti h 
  for(i=0;i<r;i++)     
  {  if(i%2==0)      //isle yadi row even ho to same print ho
  {
    for(j=0;j<c;j++)
    {
      printf("%d ",a[i][j]);
    }
  }
  else                        //or yadi row odd ho to reverse print ho jae
  for(j=c-1;j>=0;j--)
  {
    printf("%d ",a[i][j]);
  }
  printf("\n");
  }
  

  return 0;
}