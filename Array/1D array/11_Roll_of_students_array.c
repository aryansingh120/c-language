/* given an array of marks of 10 students,if the marks of any students is less then
35 ,print its roll no.[roll no here refer to the index number of the array] */

#include<stdio.h>
int main()
{
    int marks[10],i;
    printf("enter marks of students\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&marks[i]);
    }
    
    
        for(i=0;i<10;i++)
        {
            if(marks[i]<35)
            printf("student roll is %d\n",i);
        }
    
    return 0;
}