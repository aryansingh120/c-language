#include<stdio.h>
struct cricketer
{
    char name[20];
    int age;
    int match;
    float avg;
}a[20];
int main()
{
    int i;
    for(i=0;i<20;i++)
    {
        printf("%d name => ",i+1);
        fflush(stdin);
        scanf("%[^\n]s",a[i].name);
        printf("%d age => ",i+1);
        scanf("%d",&a[i].age);
        printf("%d No of matches => ",i+1);
        scanf("%d",&a[i].match);
        printf("%d avg => ",i+1);
        scanf("%f",&a[i].avg);
    }
    printf("name\t\tage\t\tmatches\t\tavg\n");
    for(i=0;i<20;i++)
    {
        printf("%s\t\t",a[i].name);
        printf("%d\t\t",a[i].age);
        printf("%d\t\t",a[i].match);
        printf("%f\n",a[i].avg);
    }

}