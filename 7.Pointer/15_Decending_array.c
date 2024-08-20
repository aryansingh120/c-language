#include<stdio.h>
#include<limits.h>
int main()
{
    int i,j,a[5],*p[5];
    printf("enter array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        p[i]=&a[i];
        
    }
    for(i=0;i<5;i++)
    { 
      for(j=i+1;j<5;j++)
        {
            if(*p[i]<*p[j])
           {
             int swap=*p[i];
                *p[i]=*p[j];
                *p[j]=swap;
            }

        }
     }
      for(i=0;i<5;i++)
    { 
        printf("%d ",*p[i]);
    }
    return 0;

}