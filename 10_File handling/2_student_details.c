#include<stdio.h>
void add();
void display();
struct employee
{
    char name[20],dept[20];
    int salary,id,age;
}a;
int main()
{
   int z;
   printf("enter your choice\npress 1 for add record\npress 2 for display record\n");
   scanf("%d",&z);
   switch(z)
   {
    case 1:add();
    break;
    case 2 : display();
    break;
    default :
    printf("wrong input");
   }

return 0;
}

void add()
{
    int x;
    do
    {
    printf("name => ");
fflush(stdin);
scanf("%s",&a.name);
printf("dept => ");
fflush(stdin);
scanf("%s",&a.dept);
printf("id => ");fflush(stdin);
scanf("%d",&a.id);
printf("age => ");
fflush(stdin);
scanf("%d",&a.age);
printf("salary => ");
fflush(stdin);
scanf("%d",&a.salary);
FILE *f1;
f1=fopen("emp.txt","a");
fwrite(&a,sizeof(a),1,f1);
printf("record successfully written\n");
fclose(f1);
printf("press 1 for enter another record\npress 2 for exit\npress => ");
scanf("%d",&x);
    }while(x==1);
}

void display()
{
int x;
do
{
    FILE *f1;
     f1 = fopen("emp.txt","r");
    while(fread(&a,sizeof(a),1,f1)==1)
    {
    printf("student id => %d\n",a.id);
    printf("student name => %s\n",a.name);
    printf("student dept => %s\n",a.dept);
    printf("student salary => %d\n",a.salary);
    printf("\n");
    }
    printf("record successfuly display\n");
    fclose(f1);
    printf("press 1 for again display record\t\tpress 2 for exit\npress => ");
    scanf("%d",&x);
}while(x==1);
}