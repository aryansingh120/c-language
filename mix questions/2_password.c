#include<stdio.h>
int main()
{
    int n=1,password;
    printf("enter password");
    while(n!=0)
    {
        scanf("%d",&password);
        if(password==1234)
        {
        printf("correct password");
        n=0;  //loop ko exit krne k lie
        }
        else
        printf(" password incorrect! try again");
        printf("\n");
    }
       return 0;
}
