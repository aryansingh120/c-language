#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,10},i,j,count;
    for(i=1;i<5;i++)
    {
        count=1;
        for(j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
            
                printf("duplicate value %d =%d\n",a[i],count);
            
        
        }
    }
    return 0;
}