#include<stdio.h>
#include<string.h>
struct student
{
    char name[10];
    int roll;
    int age;
    int marks;
}a,b;
int main()
{
    //strcpy(a.name,"aryan");
    a.name = "ram";
    a.roll=12;
    a.age=10;
    a.marks=199;
printf("%s\n",a.name);
printf("%d\n",a.roll);
printf("%d\n",a.age);
printf("%d\n",a.marks);

b=a;    //copy structure in another structure
printf("%s\n",b.name);
printf("%d\n",b.roll);
printf("%d\n",b.age);
printf("%d\n",b.marks);
return 0;
}