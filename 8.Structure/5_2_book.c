#include<stdio.h>
#include<string.h>
struct book
{
    char title[20];
    char author[20];
    int price;
} a,b,c;
int main()
{
  strcpy(a.title,"coding");
  strcpy(a.author,"paras");
  a.price=2;
  printf("title => %s\n",a.title);
  printf("Author => %s\n",a.author);
  printf("Price => %d\n\n\n",a.price);

  strcpy(b.title,"ist Lesson");
  strcpy(b.author,"dev");
  b.price=20;
  printf("title => %s\n",b.title);
  printf("Author => %s\n",b.author);
  printf("Price => %d\n\n\n",b.price);

  strcpy(c.title,"kodu");
  strcpy(c.author,"deepanshu");
  c.price=12000000;
  printf("title => %s\n",c.title);
  printf("Author => %s\n",c.author);
  printf("Price => %d\n",c.price);

  printf("title\tauthor\tprice\n");
  if(a.price>b.price&&a.price>c.price)
  {
    printf(" %s\t",a.title);
  printf(" %s\t",a.author);
  printf(" %d\t",a.price);
  printf("(most expensive)");
  }
   if(b.price>c.price&&b.price>a.price)
{
     printf(" %s\t",b.title);
  printf(" %s\t",b.author);
  printf(" %d\t",b.price);
  printf("(most expensive)");

}
if(c.price>b.price&&c.price>a.price)
{
     printf(" %s\t",c.title);
  printf(" %s\t",c.author);
  printf(" %d\t",c.price);
  printf("(most expensive)");
}
if(a.price<b.price&&a.price<c.price)
  {
    printf("\n %s\t",a.title);
  printf(" %s\t",a.author);
  printf(" %d\t",a.price);
  printf("(most sasti)");
  }
  if(b.price<a.price&&b.price<c.price)
{
     printf("\n %s\t",b.title);
  printf(" %s\t",b.author);
  printf(" %d\t",b.price);
  printf("(most sasti)");
}
 if(c.price<a.price&&c.price<b.price)
{
     printf("\n %s\t",c.title);
  printf(" %s\t",c.author);
  printf(" %d\t",c.price);
  printf("(most sasti)");
}

  return 0;
}