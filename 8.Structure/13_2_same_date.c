#include<stdio.h>
#include<stdbool.h>
struct date
{
    int day;
    int month;
    int year;
}a,b;
int main()
{
struct date a = {10,11,1999};
struct date b = {10,1,1999};
 bool flag = true;
 if(a.day!=b.day) flag=false;
 if(a.month!=b.month) flag=false;
 if(a.year!=b.year) flag=false;

 if(flag==true)
printf("same date");
else  
printf("not same date");
return 0;

}