#include<stdio.h>
struct student {
    char name[20];
    int roll;
    int age;
}a;
int main()
{
    a.roll=22;
    strcpy(a.name,"aryan");
    a.age=29;
    struct student *p=&a;
    printf("size of structure is => %d\n",sizeof(a));
    printf("address of structure is = %p\n",p);
    printf("address of name is = %p\n",&p->name);
    printf("address of roll is = %p\n",&p->roll);
    printf("address of age is = %p\n",&p->age);
    return 0;
}