#include<stdio.h>
#include<limits.h>
struct employee
{
    int id;
    char name[20];
    int salary;
} a[3];
int main()
{
    int i,j,max;
    max=INT_MIN;
    for(i=0;i<3;i++)
    {
        printf("\n%d employee ID => ",i+1);
        scanf("%d",&a[i].id);
        printf("%d name => ",i+1);
        scanf("%s",&a[i].name);
        printf("%d employee salary => ",i+1);
        scanf("%d",&a[i].salary);

    }
    for(i=0;i<3;i++)
    {
       if(max<a[i].salary)
        {
            max=a[i].salary;
        }
      
        }
        printf("id\tname\tsalary\n");
        for(i=0;i<3;i++)
        {
            if(max==a[i].salary)
            {
              printf("%d\t",a[i].id);
              printf("%s\t",a[i].name);
              printf("%d\t",a[i].salary);
              printf("maximum salary");
            }
        }
 
    return 0;
}