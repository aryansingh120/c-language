#include<stdio.h>
int main()
{
    int i,j,a[4][3],count=1;
     
     for(i=0;i<4;i++)
     {
        for(j=0;j<3;j++)
        {
            a[i][j]=count++;    //a[i][j] me count ki value chali jaye uske baad count++ ho jaye
            

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
