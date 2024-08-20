#include<stdio.h>

    int main()
    {
        int i,j,a[20],n,count=0,flag=0,b=0,c=0,d=0;
        printf("enter array elements\n");
        for(i=0;i<20;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<20;i++)
        {
           if(a[i]>=0)
           count++;
           if(a[i]<0)
           flag++;
           if(a[i]%2==0&&a[i]!=0)
           b++;
           if(a[i]%2!=0)
           c++;
           if(a[i]==0)
           d++;
        }
        printf("total number of positive => %d\n",count);
        printf("total number of negative => %d\n",flag);
        printf("total number of odd => %d\n",c);
        printf("total number of even => %d\n",b);
        printf("total number of zero => %d\n",d);
        return 0;
       
    }
