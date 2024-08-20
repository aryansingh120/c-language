#include<stdio.h>
int main()
{
    int r,c;
    printf("enter rows and column numbers\n");
    scanf("%d%d",&r,&c);
    int a[3][3],i,j;
    if(r==c)
    {
            printf("rows and columns are equal\n");

      for(i=0;i<r;i++)
       {
          for(j=0;j<c;j++)
           {
               if(i==j)
               printf("1 ");
               else
                printf("0 ");
            }
           printf("\n");
        }
    }
    else
    printf("rows and columns are not equal");
    return 0;
}
    