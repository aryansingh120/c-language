#include<stdio.h>
int main()
{
    int a[5],i,j,g;
    printf("enter array elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<5;i++)
     {
        printf("%d",a[i]);
     }
      for(j=0;j<2;j++)
      {
        g=a[4];
      
       for(i=4;i>0;i--)
       {
          a[i]=a[i-1];
       }
       a[i]=g;
      }
        for(i=0;i<5;i++)
        {
            printf("\n%d",a[i]);

        }
        return 0;

}