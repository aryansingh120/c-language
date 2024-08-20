#include<stdio.h>
void area();
 int main()
{

 area();    
}
void area()
{
    int r;
  float pi=3.14;
  printf("enter radius\n");
  scanf("%d",&r); 
 printf("Area of circle is =%f",pi*r*r);
}