#include<stdio.h>
int main()
{
    int a,b,i,c;
  
    printf("enter the number and his power\n");
    scanf("%d%d",&a,&b);
      c=a;
      if(a>0 &&b==0)
      {
      printf("ans is => %d",1);
      }
      else if(a==0&&b>0)
      {
      printf("ans is => %d",0);
      }
      
      else if(a==0&&b==0)
      {
       printf("ans is => infinite");
      }
      else
      {
    for(i=1;i<b;i++)
    {
        a=a*c;
    }
     printf("ans is => %d",a);
      }

    return 0;
}

    