#include<stdio.h>

    int main()
    {
        int i,j,a[10],n,count=0;
        printf("enter array elements\n");
        for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("enter that number you want to check => ");
        scanf("%d",&n);
        for(i=0;i<10;i++)
        {
           if(a[i]==n)
           {
            count++;
            break;
           }
        }
        if(count==1)
        printf("%d is available in array",n);
        else
        printf("%d is not available in array",n);
        return 0;
       
    }
