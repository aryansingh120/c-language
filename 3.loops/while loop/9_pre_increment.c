#include<stdio.h>
int main()
{
    int i=1;
    while(++i<=5)         //i me pahle increment hoga uske baad condition check hogi
    {
        printf("%d",i++);       //pahle i print hoga phir increment hoga
    }
    return 0;
}