#include<stdio.h>
struct car
{
    char company[20];
    char model[20];
    int speed;
    int amount;

}a;
struct supercar
{
    struct car a;
    char colour[20];
    char owner[30];
}b;
int main()
{
printf("enter your supercar details\n");
printf("company name => ");
fflush(stdin);
scanf("%[^\n]s",b.a.company);
printf("model => ");
fflush(stdin);
scanf("%[^\n]s",b.a.model);
printf("speed => ");
scanf("%d",&b.a.speed);
printf("price => ");
scanf("%d",&b.a.amount);
printf("colour => ");
fflush(stdin);
scanf("%[^\n]s",b.colour);
printf("owner => ");
fflush(stdin);
scanf("%[^\n]s",b.owner);

printf("\ncompany\t\tmodel\t\t\tspeed\t\tamount\t\tcolour\t\towner\n");
printf("%s\t\t",b.a.company);
printf("%s\t\t",b.a.model);
printf("%d\t\t",b.a.speed);
printf("%d\t",b.a.amount);
printf("%s\t\t",b.colour);
printf("%s\n",b.owner);
}