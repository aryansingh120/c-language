#include<stdio.h>
int main()
{
    int i,j,a[4][3],count=10;
     
     for(i=0;i<4;i++)
     {
        for(j=0;j<3;j++)
        {
            a[i][j]=count++;
            

        }
        
     }
     for(i=0;i<4;i++)
     {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
     }
     return 0;
}
