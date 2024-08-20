#include<stdio.h>
#include<math.h>
int main()
{
    int totaldays,year,month,day;
    
    printf("enter total days  => ");
    scanf("%d",&totaldays);
    year=totaldays/365;
    month = (totaldays-year*365)/30;
    day = totaldays-((year*365)+(month*30));
    
    printf("years is => %d\n",year);
    printf("months is => %d\n",month);
    printf("days is => %d",day);

   
    
    return 0;
}