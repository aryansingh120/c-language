#include<stdio.h>
#include<string.h>
struct book
{
    char name[50];
    int price;
    int pages;
};
int main()
{
struct book a,b;
strcpy(a.name,"untold story");
a.price=200;
a.pages=230;
printf("first book => ");
printf("name => %s\n",a.name);
printf("price => %d\n",a.price);
printf("pages => %d\n\n",a.pages);

strcpy(b.name,"7 mistakes of my life");
b.price=2000;
b.pages=20;
printf("second book => ");
printf("name => %s\n",b.name);
printf("price => %d\n",b.price);
printf("pages => %d\n",b.pages);



return 0;
}