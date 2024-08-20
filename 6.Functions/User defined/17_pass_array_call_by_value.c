#include<stdio.h>
void display(int b[])
{
int i;
for(i=0;i<5;i++)
{
  printf("%d ",b[i]);
}
}
int main()
{
  int i,a[5];
  printf("enter array numbers\n");
  for(i=0;i<5;i++)
  {
      scanf("%d",&a[i]);
  }
  display(a);
  return 0;
}