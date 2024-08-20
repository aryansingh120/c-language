#include<stdio.h>
struct stdudent
{
    char name[20];
    int roll;
    int class;
    int marks[3];

}a;
int main()
{
    int i;
    printf("enter details\n");
    printf("name => ");
    scanf("%s",&a.name);
    printf("roll => ");
    scanf("%d",&a.roll);
    printf("class => ");
    scanf("%d",&a.class);
    for(i=0;i<3;i++)
    {
        printf("%d sub marks => ",i+1);
        scanf("%d",&a.marks[i]);
    }
    printf("name\t\troll\t\tclass\t\tmarks\n");
    printf("%s\t\t",a.name);
    printf("%d\t\t",a.roll);
    printf("%d\t\t",a.class);
    for(i=0;i<3;i++)
    {
        printf("%d ",a.marks[i]);
    }
    return 0;
}