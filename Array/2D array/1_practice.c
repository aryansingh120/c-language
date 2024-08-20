#include<stdio.h>
#include<string.h>
struct employee
{
  char name[30];
  char street[30];
  int pin;

}a;
int main()
{
  
  struct employee *p;
  p=&a;
  strcpy(a.name,"aryan");
  strcpy(a.street,"from kishanpura");
  a.pin=333036;
  printf("%s ",p->name);
  printf("%s ",p->street);
  printf("%d",p->pin);
  return 0;
}