#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
}a,b;
int main()
{
struct date a = {10,11,1999};
struct date b = {10,11,1999};
if(a.day==b.day&&a.month==b.month&&a.year==b.year)
printf("same date");
else  
printf("not same date");
return 0;

}