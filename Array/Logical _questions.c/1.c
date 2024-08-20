//point out the error if any in the following code
#include<stdio.h>
int main()
{
    int i,a=2,b=3;
    int arr[2+3];              //array declearation method
    for(i=0;i<a+b;i++)       //a+b yaani 5
    {
        scanf("%d",&arr[i]);
        printf("\n%d",arr[i]);
        
    }
    return 0;
}