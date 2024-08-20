#include<stdio.h>
#include<math.h>
struct date
{
    int day;
    int month;
    int year;
}a[2];
int main()
{
    int i,total1,total2,difference;
   for(i=0;i<2;i++)
   {
    printf("%d day => ",i+1);
    scanf("%d",&a[i].day);
    printf("%d month => ",i+1);
    scanf("%d",&a[i].month);
    printf("%d year => ",i+1);
    scanf("%d",&a[i].year);
   }
   total1=a[0].day+a[0].month*30+a[0].year*365;
  // printf("%d",total1);
   total2=a[1].day+a[1].month*30+a[1].year*365;
  // printf("%d",total2);
  difference=total1-total2;
  printf("difference between dates => %d",abs(difference));  //agar ans -ve aaye to usko abs() function +ve me convert kr dega
  return 0;
}