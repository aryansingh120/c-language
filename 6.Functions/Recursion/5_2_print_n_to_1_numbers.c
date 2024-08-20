#include<stdio.h>
void num(int);
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    num(n);
    return 0;

}
void num(int a)
{
   if (a==0)  //agar a ki value 0 h to program vhi pr end ho jaye or jab bhi function end hota h to wapas vhi jata h jisne use 
   return;      //call lgaya tha 
   
    printf("%d ",a);
    num(a-1);
   
    
}