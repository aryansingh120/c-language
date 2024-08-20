#include<stdio.h>
struct time
{
    int h;
    int m;
    int s;

};
int main()
{
   int i,th=0,tm=0,ts=0,a,b,c;
   struct time s[2];
   for(i=0;i<2;i++)
   { 
    printf("enter %d time\n",i+1);
     printf("hours=>");
     scanf("%d",&s[i].h);
     printf("minutes=>");
     scanf("%d",&s[i].m);
     printf("seconds=>");
     scanf("%d",&s[i].s);
   }
   printf("Hours\tMinutes\tSeconds\n");
    for(i=0;i<2;i++)
   {
    printf("%d\t",s[i].h);
    printf("%d\t",s[i].m);
    printf("%d\n",s[i].s);
    ts+=s[i].s;
    tm+=s[i].m;
    th+=s[i].h;

}
// printf("hours => %d\n",th);
// printf("minutes => %d\n",tm);
// printf("seconds => %d",ts);
if(ts>=60)
{
a=ts/60;
tm+=a;
printf("second is =>%d\n",ts%60);
}
else 
printf("seconds is => %d\n",ts);
 if(tm>=60)
{
 b=tm/60;
 th+=b;
 printf("minutes => %d\n",tm%60);
 } 
 else
 printf("minutes is =>%d\n",tm);
 printf("hours is => %d",th);

return 0;
}
