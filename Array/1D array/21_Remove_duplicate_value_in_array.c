#include<stdio.h>
int main()
{
    int a[5],i,j;
    printf("enter yours array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("after remove duplicate value,the array is:=");
    for(i=0;i<5;i++)
    {
       for(j=i+1;j<5;j++)
       {
          if(a[i]==a[j])
          {
            
             a[j]=a[j+1];
              a[j]=-1;
          }
       }
    
    }
for(i=0;i<5;i++)
    {
        if(a[i]!=-1)
        {
    
    printf("%d ",a[i]);
    }
    }

return 0;
}