#include<stdio.h>
#include<math.h>
int main()
{
    int n,note100,note50,note20,note10,note5,note2,note1;
    
    printf("enter value  => ");
    scanf("%d",&n);
     note100 = n/100;
     note50 = (n-note100*100)/50;
     note20 = (n-((note100*100)+(note50*50)))/20;
     note10 = (n-((note100*100)+(note50*50+(note20*20))))/10;
     note5 = (n-((note100*100)+(note50*50+(note20*20)+(note10*10))))/5;
     note2 = (n-((note100*100)+(note50*50+(note20*20)+(note10*10)+(note5*5))))/2;
     note1 = n-((note100*100)+(note50*50+(note20*20)+(note10*10)+(note5*5)+(note2*2)));
    printf("Notes of 100's => %d",note100);
    printf("\nNotes of 50's => %d",note50);
    printf("\nNotes of 20's => %d",note20);
    printf("\nNotes of 10's => %d",note10);
    printf("\nNotes of 5's => %d",note5);
    printf("\nNotes of 2's => %d",note2);
    printf("\nNotes of 1's => %d",note1);
    
    return 0;
}