#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
  int i,j,b=0,c=3,numsSize,k;
  k=INT_MIN;
  printf("enter array numsSize");
  scanf("%d",&numsSize);
  int nums[numsSize],z[numsSize];
  printf("enter array nubers");
  for(i=0;i<numsSize;i++)
  {
    scanf("%d",&nums[i]);
  }

     for(i=0;i<numsSize-2;i++)
     {
      k=3;
      for(j=b;j<c;j++)
      {
        if(k<nums[j])
        k=nums[j];
        z[i]=k;
      }
      b++;
      c++;
    //  printf("%d",z[i]);
      // printf("%d ",z[i]);
      // z[i]=k;
     }
    //  return z;
  }

  // for(i=0;i<numsSize-2;i++)
  // {
  //   printf("%d",z[i]);
  // }


































  // for(i=0;i<6;i++)
  // {
  // int k=INT_MIN;
  //   for(j=b;j<c;j++)
  //   {
  //     if(k<nums[j])
  //     k=nums[j];

  //   }
  //   // printf(" value i=>%d\n",i);
  //   printf("%d ",k);
  //   // printf("%d %d\n\n",b,c);
  //   b++;
  //   c++;
  // }
 
