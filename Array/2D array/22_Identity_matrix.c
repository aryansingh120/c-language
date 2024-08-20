#include<stdio.h>
int main()
{
    int r,c,count=0,flag=0;
    printf("enter matrix rows and columns\n");
    scanf("%d%d",&r,&c);
    if(r==c)
    {
        printf("rows and columns are equal\nnow you can check matrix");
    int a[r][c],i,j;
    printf("\nenter matrix elements\n");
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
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          if(i==j && a[i][j]==1)    //yadi i or j brabar ho or a[i][j] ki value 1 ho to count++ ho jae
          {
            count++;
          }
          else if(i!=j && a[i][j]==0)     //yadi i or j brabar nhi ho or a[i][j] ki value 0 ho to count++ ho jae
          {
            flag++;
          }
        }
    }
        if(count==r && flag==(r*c)-r)  //yadi total count ki value row ke brabar ho or total flag ki value (r*c)-r ke brabar ho to
        printf("matrix is identity");
        else
        printf("matrix is not identity");
    }
    else
    printf("rows and columns are not equal\nso you can't check matrix");
     return 0;
}
//line no 41 me count== r ya c kuchh bhi le sakte h or glag me bhi -r ki jagah -c le sakte h kyonki yaha pr r or c ki value same h