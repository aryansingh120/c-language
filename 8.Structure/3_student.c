#include<stdio.h>
struct student 
{
    char stdname[20];
    int roll;
    char class[20];
    char subject[20];
    int marks;
};
int main()
{
    int i,total=0;
    struct student s[5];
    for(i=0;i<5;i++)
    {
        printf("enter %d student name => ",i+1);
        scanf("%s",&s[i].stdname);
        printf("enter %d student Roll no => ",i+1);
        scanf("%d",&s[i].roll);
        printf("enter %d student class => ",i+1);
        scanf("%s",&s[i].class);
        printf("enter %d student subject => ",i+1);
        scanf("%s",&s[i].subject);
        printf("enter %d student marks => ",i+1);
        scanf("%d",&s[i].marks);
    }
    printf("\n\nname\troll no\tclass\tsubject\tmarks\n");
    for(i=0;i<5;i++)
    {
        printf("%s\t",s[i].stdname);
        printf("%d\t",s[i].roll);
        printf("%s\t",s[i].class);
        printf("%s\t",s[i].subject);
        printf("%d\n",s[i].marks);
        total+=s[i].marks;

    }
    printf("\ntotal marks is => %d",total);
     
    return 0;
}