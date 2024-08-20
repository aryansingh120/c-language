#include<stdio.h>
void array(int *b);
int main()
{
    int a[5];
    printf("enter array elements\n");
    array(a);
    return 0;

}
void array(int *b)
{
    int i,*p[5];
     for(i=0;i<5;i++)
    {
       scanf("%d",&b[i]);
        p[i]=&b[i];
    }
    for(i=0;i<5;i++)
    {
        // p[i]=&b[i];
        printf("number is => %d and its address => %p\n",*p[i],p[i]);
    }
}