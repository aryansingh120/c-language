#include<stdio.h>
#include<string.h>
struct student
{
    int year;
    char name[20],dept[20],course[20];
}a,b;
int check(struct student x,struct student y)
{
    if(strcmp(x.dept,y.dept)==0)
     return 1;
     else return 0;
}
int main()
{
  strcpy(a.name,"aaryan");
  strcpy(a.dept,"coding");
  strcpy(a.course,"full stack developer");
  a.year = 2020;
  strcpy(b.name,"abhi");
  strcpy(b.dept,"programming");
  strcpy(b.course,"frontend");
  b.year = 2022;
  if(check(a,b)==1)
  printf("same department");
  else
   printf("not same department");
  return 0;
}