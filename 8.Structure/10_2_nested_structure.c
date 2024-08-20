#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    int class;
    int id;

    struct marks
    {
        //struct student a;
        int hindi;
        int english;
        int math;
    }b;
}a;

int main()
{
    //struct student a;

    printf("enter student details\n");
    printf("name => ");
    scanf("%s",&a.name);
     printf("roll => ");
    scanf("%d",&a.roll);
     printf("class => ");
     scanf("%d",&a.class);
     printf("id => ");
     scanf("%d",&a.id);
    printf("hindi => ");
    scanf("%d",&a.b.hindi);
    printf("english => ");
    scanf("%d",&a.b.english);
    printf("math => ");
    scanf("%d",&a.b.math);
    printf("name\t\troll\t\tclass\t\tid\t\thindi\t\tenglish\t\tmath\n");
    printf("%s\t\t",a.name);
    printf("%d\t\t",a.roll);
    printf("%d\t\t",a.class);
     printf("%d\t\t",a.id);
    printf("%d\t\t",a.b.hindi);
    printf("%d\t\t",a.b.english);
    printf("%d",a.b.math);
    return 0;
}