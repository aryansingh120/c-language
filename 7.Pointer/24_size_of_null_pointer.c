#include<stdio.h>
int main()
{
   void *p1=NULL;
   int *p2=NULL;
   float *p3=NULL;
   char *p4=NULL;
   double *p5=NULL;
    printf("size of void pointer =>%d\n",sizeof(p1));
    printf("size of int pointer =>%d\n",sizeof(p2));
    printf("size of float pointer =>%d\n",sizeof(p3));
    printf("size of char pointer =>%d\n",sizeof(p4));
    printf("size of double pointer =>%d\n",sizeof(p5));
    
    return 0;
}

