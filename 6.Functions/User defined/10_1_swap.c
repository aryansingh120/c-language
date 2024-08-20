#include<stdio.h>
void swap(int *a,int *b);

int main()
{
  int x,y,z;
  printf("enter a and b\n");
  scanf("%d%d",&x,&y);
  swap(&x,&y);
  
  return 0;
}
void swap(int *a,int *b)
{
  int swap;
  swap=*a;
  *a=*b;
  *b=swap;
  printf("a= %d\n",*a);
   printf("b= %d",*b);
  

}