/*program to read array elements and compare all elements with rendom number
and print greater number then random number*/
#include<stdio.h>
int main()
{
    int a[10],i,x;
    printf("enter your array elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<10;i++)
     {
        printf("%d ",a[i]);
     }
     printf("\nenter the number you want to compare\n");
     scanf("%d",&x);
     printf("greater number then %d:= ",x);
     for(i=0;i<10;i++)
     {
        if(a[i]>x)
        {
            printf("%d ",a[i]);
        }
    
     }
     return 0;
}