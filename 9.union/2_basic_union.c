#include<stdio.h>
#include<string.h>
union student
{
    char name[20];
    int age,roll;
}a;
int main()
{
   
   a.age = 20;
   printf("%d\n",a.age);
   
   strcpy(a.name,"aaryan");
    printf("%s",a.name);
   
   return 0;
}