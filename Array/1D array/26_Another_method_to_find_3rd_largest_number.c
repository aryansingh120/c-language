//program to find any largest number in array
#include<stdio.h>
int main()
{
    int a[5]={10,56,38,24,49},i,swap,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
            swap=a[i];
            a[i]=a[j];
            a[j]=swap;
            }
        }
    
        
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n third=%d",a[2]);     //koi bhi llargest number nikalne ke lie a[2] me 
                                     //change hoga
    return 0;
} 

  //agar aap array ko print nhi krna chahte h to 19,20,21,22 line ki 
  //statement ko skip bhi kr sakte h