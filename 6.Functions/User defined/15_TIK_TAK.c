#include<stdio.h>
void make_board(int,char);
void creat_board();
int check_for_win();
char a[10]={'0','1','2','3','4','5','6','7','8','9'};
int main()
{
    int choice,player=1,i;
    char mark;
     do
     {
        creat_board();
        player=(player%2) ? 1 : 2;
        printf("player %d ,enter a number => ",player);
        scanf("%d",&choice);
        mark=(player==1) ? 'x': 'o';
        make_board(choice,mark);
        i=check_for_win();
        player++;
    } while (i==-1);
    creat_board();
    if(i==1)
    printf("player %d you have won this match",--player);
    else
    printf("--------->Draw<----------");
     
     return 0;
}
void creat_board()
{
    printf("\t\t\tTIK TAK GAME\n");
    printf("\tPlayer 1 => 'x'\t\t\tPlayer 2 => 'o'\n");
    printf("_%c__|_%c__|_%c__\n",a[1],a[2],a[3]);
    printf("    |    |   \n");
    printf("_%c__|_%c__|_%c__\n",a[4],a[5],a[6]);
    printf("    |    |   \n");
    printf("_%c__|_%c__|_%c__\n",a[7],a[8],a[9]);
    printf("    |    |   \n");
    };

    void make_board(int choice,char mark)
    {
       if(choice==1&&a[1]=='1')
       a[1]=mark;
        else if(choice==2&&a[2]=='2')
       a[2]=mark;
        else if(choice==3&&a[3]=='3')
       a[3]=mark;
        else if(choice==4&&a[4]=='4')
       a[4]=mark;
        else if(choice==5&&a[5]=='5')
       a[5]=mark;
        else if(choice==6&&a[6]=='6')
       a[6]=mark;
        else if(choice==7&&a[7]=='7')
       a[7]=mark;
        else if(choice==8&&a[8]=='8')
       a[8]=mark;
        else if(choice==9&&a[9]=='9')
       a[9]=mark;
       else
       printf("Invalid move");
    };

    int check_for_win()
    {
        if(a[1]==a[2]&&a[2]==a[3])
        return 1;
        else if(a[4]==a[5]&&a[5]==a[6])       //horizontal match
        return 1;
         else if(a[7]==a[8]&&a[8]==a[9])
        return 1;

         else if(a[1]==a[5]&&a[5]==a[9])
        return 1;                                  // digonal match
         else if(a[3]==a[5]&&a[5]==a[7])
        return 1;

         else if(a[1]==a[4]&&a[4]==a[7])
        return 1;
         else if(a[2]==a[5]&&a[5]==a[8])        //vertical match
        return 1;
         else if(a[3]==a[6]&&a[6]==a[9])
        return 1;

        else if(a[1]!='1'&&a[2]!='2'&&a[3]!='3'&&a[4]!='4'&&a[5]!='5'&&a[6]!='6'&&a[7]!='7'&&a[8]!='8'&&a[9]!='9')   //no match
        return 0;
        else
        return -1;


    };