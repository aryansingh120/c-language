#include<stdio.h>
int main()
{
    int i,j,count=0,flag=0,s=0,swap;
    char a[50],b[50];
    printf("enter string\n");
    fgets(a,50,stdin);
    printf("enter second string\n");
    fgets(b,50,stdin);
    for(i=0;a[i]!='\0';i++)
     {
        flag++;
     }
    // printf("%d",flag);
      for(i=0;b[i]!='\0';i++)
     {
        s++;
     }
    // printf("%d",flag);


       if(flag==s)
       {
        for(i=0;a[i]!='\0';i++)
         {
            for(j=i+1;a[j]!='\0';j++)
            {
                if(a[i]>a[j])
                {
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
            }
         }
             /*for(i=0;a[i]!='\0';i++)
            {
                printf("%c",a[i]);
            }*/


            for(i=0;b[i]!='\0';i++)
         {
            for(j=i+1;b[j]!='\0';j++)
            {
                if(b[i]>b[j])
                {
                swap=b[i];
                b[i]=b[j];
                b[j]=swap;
            }
            }
         }
           /*  for(i=0;b[i]!='\0';i++)
            {
                printf("%c",b[i]);

            }*/
           for(i=0,j=0;a[i]!='\0',b[j]!='\0';i++,j++)
           {
            if(a[i]!=b[i])
            {
            count++;
            break;
           }
           }
           if(count==1)
           printf("string is not anagram");
           else
           printf("string is anagram");
       }
       else
       printf("length of strings are not equal");

    return 0;
}