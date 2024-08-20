#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    float distance;
    printf("enter value of x1 => ");
    scanf("%d",&x1);
    printf("enter value of x2 => ");
    scanf("%d",&x2);
    printf("enter value of y1 => ");
    scanf("%d",&y1);
    printf("enter value of y1 => ");
    scanf("%d",&y2);
    distance=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("Distance is => %f",distance);
    return 0;
}