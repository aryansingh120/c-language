#include<stdio.h>
struct student
{
    int roll,hp,attack,speed;

}a;
void change(struct student *b)
{
    b->roll =100;
    b->hp =10;
    b->speed =120;
    b->attack =132;
    // printf("%d\n",b.roll);
    // printf("%d\n",b.hp);
    // printf("%d\n",b.speed);
    // printf("%d\n",b.attack);
}
int main()
{
    a.roll =10;
    a.hp =190;
    a.speed =110;
    a.attack =106;
    change(&a);
    printf("%d\n",a.roll);
    printf("%d\n",a.hp);
    printf("%d\n",a.speed);
    printf("%d\n",a.attack);
     //change(a);
    return 0;
    }