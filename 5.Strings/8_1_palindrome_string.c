#include<stdio.h>
int main()
{
    int i,count=0,j,flag=0;
    char a[50];
    printf("enter string\n");
    fgets(a,50,stdin);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    //printf("length of string is = %d",count);      
    for(i=0,j=count-2;i<=(count-2)/2,j>=(count-2)/2;i++,j--)  //isme string ke pahle element ko last se check kiya h
    {
        if(a[i]!=a[j])
        {
            flag++;
            break;
        }
    
    }
    if(flag==1)
    printf("not palindrome string");
    else
    printf("palindrome string");
    return 0;
}
/*count-2 islie kiya h kyonki ek to array ka index n-1 hota h or dusra jab hum a[i] ki length count krte h tab yah user dwara 
diye gye enter command ko bhi count kr leta h to us enter ko bhi is loop me count nhi krenge isle -2 kiya h*/
