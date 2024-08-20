#include<stdio.h>
#include<string.h>
struct student
{
    int year;
    char name[20],dept[20],course[20];
}a,b;
int check(struct student x,struct student y)
{
    int i,count=0,length1=0,length2=0;
    for(i=0;x.dept[i]!='\0';i++)
    {
        length1++;

    }
    for(i=0;y.dept[i]!='\0';i++)
    {
        length2++;
    }
     if(length1==length2)
     {
    for(i=0;i<length1;i++)
    {
        if(x.dept[i]!=y.dept[i])
        {
        count++;
        break;
        }
    }
    if(count==1)
    return 1;
    else
    return 0;
    }
    else
    return 1;
}
int main()
{
  strcpy(a.name,"aaryan");
  strcpy(a.dept,"coding");
  strcpy(a.course,"full stack developer");
  a.year = 2020;
  strcpy(b.name,"aaryan");
  strcpy(b.dept,"coding");
  strcpy(b.course,"frontend");
  b.year = 2022;
  //printf("%d",check(a,b));
  if(check(a,b)==1)
  printf("not same department");
  else
   printf("same department");
  return 0;
}