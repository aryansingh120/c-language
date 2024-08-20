#include<stdio.h>

int main()
{
int total,year,week;
printf("enter days\n");
scanf("%d",&total);
year=total/365;
printf("years is => %d\n",year);
week=(total-(365*year))/7;
printf("weeks is =%d",week);
printf("\ndays => %d",total-(year*365+week*7));

    return 0;
}
