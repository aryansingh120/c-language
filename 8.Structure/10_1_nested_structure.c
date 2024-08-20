#include<stdio.h>
struct address
{
    int house;
    char colony[20];
    int pin;
    char city[30];

};
struct employee
{
    char name[20];
    int id;
    int salary;
    struct address a;

}e;
int main()
{
    printf("name = \n");
    scanf("%[^\n]s",e.name);
    printf("id = ");
    scanf("%d",&e.id);
    printf("salary = ");
    scanf("%d",&e.salary);
    printf("house = ");
    scanf("%d",&e.a.house);
    printf("colony = ");
    fflush(stdin);
    scanf("%[^\n]s",&e.a.colony);
    printf("pin = ");
    scanf("%d",&e.a.pin);
    printf("city = ");
    fflush(stdin);
    scanf("%[^\n]s",e.a.colony);



}