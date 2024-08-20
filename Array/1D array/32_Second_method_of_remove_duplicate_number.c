//remove duplicate number in array
#include<stdio.h>
int main()
{
    int a[20],i,j,k,n;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array is = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                  for(k=j;k<n;k++)   //number shift krne k lie
               {
                   a[k]=a[k+1];
                }
            
                   n--;
                    j--;
            }
        }
    }
    printf("After delete duplicate element \nArray is = ");
       for(i=0;i<n;i++)
       {
        printf("%d",a[i]);
       }

    return 0;

}