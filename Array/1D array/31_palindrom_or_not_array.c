//program to check array is palindrom or not
#include<stdio.h>
int main()
{
    int a[5],b[5],i,count=0;
    printf("enter yours array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<5;i++)         
    {
        b[i]=a[4-i];           //array a[i] ko reverse krke b[i] me store kiya h
    }
    printf("\nReverse array is = ");
    for(i=0;i<5;i++)
    {
        printf("%d",b[i]);          //a[b] ko print kiya h
    }

 for(i=0;i<5;i++)
 {   
if(a[i]==b[i])                  //a[i] or b[i] ko compair kiya h
    count++;
 }
 if(count==5)
 {
    printf("\narray is palindron");
 }
 else
 {
    printf("\nnon palindrom array");
 }
 
    

return 0;
}