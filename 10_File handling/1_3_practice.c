#include <stdio.h>

void details();
void display();
void search();
void update();

struct student
{
    char name[20];
    int roll, marks, age;
} a;

int main()
{
    int z, x;
    do
    {
        printf("1.add record\t\t2.display\t\t3.search\t\t4.update\npress => ");
        scanf("%d", &z);
        switch (z)
        {
        case 1:
            details();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        default:
            printf("wrong input\n");
        }
        printf("1. Do you want to go to the main menu\t\t2. Exit\npress => ");
        scanf("%d", &x);
    } while (x == 1);

    return 0;
}

void details()
{
    FILE *f;
    f = fopen("std.txt", "a");
    printf("enter student details\n");
    printf("name => ");
    scanf("%s", a.name);
    printf("roll => ");
    scanf("%d", &a.roll);
    printf("age => ");
    scanf("%d", &a.age);
    printf("marks => ");
    scanf("%d", &a.marks);
    printf("record added successfully\n");
    fwrite(&a, sizeof(a), 1, f);
    fclose(f);
}

void display()
{
    FILE *f;
    f = fopen("std.txt", "r");
    while (fread(&a, sizeof(a), 1, f) == 1)
    {
        printf("name => %s\n", a.name);
        printf("roll => %d\n", a.roll);
        printf("marks => %d\n", a.marks);
        printf("age => %d\n\n", a.age);
    }
    fclose(f);
}

void search()
{
    int x, found = 0;
    FILE *f;
    f = fopen("std.txt", "r");
    printf("enter student roll => ");
    scanf("%d", &x);
    while (fread(&a, sizeof(a), 1, f) == 1)
    {
        if (x == a.roll)
        {
            found = 1;
            printf("record found\n");
            printf("name => %s\n", a.name);
            printf("roll => %d\n", a.roll);
            printf("marks => %d\n", a.marks);
            printf("age => %d\n\n", a.age);
            break;
        }
    }
    if (!found)
        printf("record not found\n");
    fclose(f);
}

void update()
{
    int x, found = 0;
    FILE *f;
    f = fopen("std.txt", "r+");
    if (f == NULL)
    {
        printf("Error opening file\n");
        return;
    }
    printf("enter roll number => ");
    scanf("%d", &x);
    while (fread(&a, sizeof(a), 1, f) == 1)
    {
        if (a.roll == x)
        {
            found = 1;
            printf("update record please\n");
            printf("name => ");
            scanf("%s", a.name);
            printf("roll no => ");
            scanf("%d", &a.roll);
            printf("marks => ");
            scanf("%d", &a.marks);
            printf("age => ");
            scanf("%d", &a.age);
            fseek(f, -sizeof(a), SEEK_CUR);
            fwrite(&a, sizeof(a), 1, f);
            printf("record updated successfully\n");
            break;
        }
    }
    if (!found)
        printf("record not found\n");
    fclose(f);
}
