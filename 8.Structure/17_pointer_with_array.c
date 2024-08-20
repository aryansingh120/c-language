#include<stdio.h>
struct details
{
    char name[20];
    int age;
    char city[10];
    char state[10];
}a[3];
int main()
{
    struct details *p[3] = {&a[0],&a[1],&a[2]};
    int i;
    for(i=0;i<3;i++)
    {
        printf("name => ");
        fflush(stdin);
        scanf("%[^\n]s",&a[i].name);
        printf("Age => ");
        fflush(stdin);
        scanf("%d",&a[i].age);
        printf("city => ");
        fflush(stdin);
        scanf("%[^\n]s",a[i].city);
        printf("state => ");
        fflush(stdin);
        scanf("%[^\n]s",a[i].state);
          
    }
    printf("name\t\tage\t\tcity\t\tstate\n");
     for(i=0;i<3;i++)
    {
       
        printf("%s\t\t",p[i]->name);
        printf("%d\t\t",p[i]->age);
        printf("%s\t\t",p[i]->city);
        printf("%s\n",p[i]->state);
    }
    return 0;
    
}