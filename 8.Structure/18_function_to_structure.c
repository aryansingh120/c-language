#include<stdio.h>

struct student
{
    char name[20];
    int age;
}a;
void fun( struct student  b);
int main()
{
printf("age => ");
fun(a);
return 0;
}
void fun( struct student  b)
{
  b.age =12;
  printf("%d",b.age);

}

