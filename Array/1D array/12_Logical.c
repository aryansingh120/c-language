#include<stdio.h>
int main()
{
    int size=10,b[size];        //  int b[10];
    b[5]=50;
    printf("%d\n",b[5]);
    printf("size of array is %d",size);
    return 0;
}