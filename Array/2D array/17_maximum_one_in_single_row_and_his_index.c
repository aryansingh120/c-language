#include<stdio.h>
#include<limits.h>
int main()
{
  int i,j,a[3][4]={1,0,1,1,0,1,0,1,1,1,1,1},count,max,index;
  max=INT_MIN;
  for(i=0;i<3;i++)
  {
    count=0;
    for(j=0;j<4;j++)
    {
      if(a[i][j]==1)
      count++;
    }
    if(max<count)
    {
      max=count;
      index=i;
    }
  }

  printf("maximum one's is %d and in %d row",max,index+1);
  return 0;
}