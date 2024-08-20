#include<stdio.h>
#include<math.h>
int main()
{
    int sec,h,m,s;
    
    printf("enter second  => ");
    scanf("%d",&sec);
    h=sec/3600;       //becouse input in seconds
    m=(sec-(h*3600))/60;
    s=sec-(h*3600)-(m*60);

    
    printf("hours is => %d\n",h);
    printf("minutes is => %d\n",m);
    printf("Seconds is => %d",s);

   
    
    return 0;
}