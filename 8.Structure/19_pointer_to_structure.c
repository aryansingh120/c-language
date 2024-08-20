#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int roll;
    int age;
}a;
int main()
{
   struct student *p;
   p=&a;
   strcpy(a.name,"aryan");
   a.roll=12;
   a.age=23;
   printf("name is => %s\n",(*p).name);
   printf("roll is => %d\n",(*p).roll);
   printf("age is => %d\n",(*p).age);
   return 0;   
}