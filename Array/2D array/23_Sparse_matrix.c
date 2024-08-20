#include<stdio.h>
int main()
{
    int r,c;
    printf("enter matrix rows and columns\n");
    scanf("%d%d",&r,&c);
    if(r==c)
    {
        printf("rows and columns are equal\nso you can check matrix");
    int a[r][c],i,j,count=0,flag=0;
    printf("enter matrix elements\n");
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
            if(i==j && a[i][j]!=0)     //i or j brabar ho or a[i][j] ki value 0 nhi ho uske alawa kuchh bhiho to count++ ho jaye
            {
                count++;
            }
            else if(i!=j && a[i][j]==0)    //i or j brabar nhi ho or a[i][j] ki value 0 ho to count++ ho jaye
            {
                flag++;
            }
        }
    }
    if(count==r && flag==(r*c)-r)
    {
        printf("matrix is sparse");
    }
    else
    {
        printf("matrix is not sparse");
    }
    }
    else
    {
        printf("rows and columns are not equal\nso you can't check matrix");
    }
    return 0;
}