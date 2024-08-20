#include<stdio.h>
int main()
{
    char a[50];
    int i,count=0;
    printf("enter string\n");
    fgets(a,50,stdin);
    printf("%s",a);
    for(i=0;a[i]!='\0';i++);  //loop ke baad ; lgane se loop andar hi andar chala 
    {
           printf("\nlength of string %d",i);    //yha loop ke last me jo i ki value aai use print krwa diya
    }

    
    return 0;
}
//output me length 1 jyada islie aati h kuonki yah user dwara press kiye gye enter ko bhi count krta h