#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    int marks[3];

}a[5];
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("%d name => ",i+1);
        fflush(stdin);
        scanf("%[^\n]s",a[i].name);
        printf("%d roll no => ",i+1);
        fflush(stdin);
        scanf("%d",&a[i].roll);
        for(j=0;j<3;j++)
        {
            printf("%d sub marks = ",j+1);
            scanf("%d",&a[i].marks[j]);
        }


    }
    printf("Name\troll no\t\tmarks 1\t\tmarks 2\t\tmarks 3\n");
    for(i=0;i<5;i++)
    {
        printf("%s \t",a[i].name);
        printf("%d\t\t",a[i].roll);
        for(j=0;j<3;j++)
        {
            printf("%d\t\t",a[i].marks[j]);
        }
        printf("\n");
    }
}