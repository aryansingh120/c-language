#include<stdio.h>
struct circle
{
    float radius;
    float area;
    float perimeter;
}a[2];
int main()
{
     int i;
     for(i=0;i<2;i++)
     {
     printf("\nenter %d circle radius => ",i+1);
     scanf("%f",&a[i].radius);
     a[i].perimeter = 2*3.14*a[i].radius;
     printf("Perimeter of %d circle is => %f\n",i+1,a[i].perimeter);
     a[i].area=3.14*a[i].radius*a[i].radius;
     printf("Area of %d circle is => %f\n",i+1,a[i].area);
    }
  
}