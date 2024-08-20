#include<stdio.h>
int swap(int *a,int *b);

int main()
{
  int x,y,z;
  printf("enter a and b\n");
  scanf("%d%d",&x,&y);
  swap(&x,&y);
  printf("a= %d\n",x);
   printf("b= %d",y);
  return 0;
}
int swap(int *a,int *b)
{
  int swap;
  swap=*a;
  *a=*b;
  *b=swap;
  // printf("a= %d\n",*a);
  //  printf("b= %d",*b);
  return (*a,*b);

}