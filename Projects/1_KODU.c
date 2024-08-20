#include<stdio.h>
void courses();
void frontend();
void backend();
void ui();
void full_stack();
void mobile();
void ai();
void data();
void digital();
void personality();
int addmission();
int fees(char*);
int scholarship();
int main()
{
  int z,x;
  do
  {  
  printf("\n\n");
  printf("\t\tWELCOME TO KODU FAMILY\n");
  printf("\t\tWELCOME TO KODU FAMILY\n");
  printf("Please choose any option\n");
  printf("1.COURSES\t\t2.SCHOLARSHIP\t\t3.ADDMISSION\t\t4.EXIT\n");
  printf("PRESS => ");
  scanf("%d",&z);
  switch(z)
  {
    case 1: courses();
    break;
    case 2: scholarship();
    break;
    case 3 : addmission();
    break;
    case 4 :
    printf("EXIT");
    break;
  }
  printf("\nDO YOU WANT TO RESTART \n");
  printf("PRESS 1 FOR RESTART\t\tPRESS 2 FOR EXIT\n ");
  printf("PRESS => ");
  scanf("%d",&x);
   } while(x==1);
  }
void courses()
{
  int x;
  char ch='y';
  do
  {  
  printf("CHOOSE ANY OPTION FOR COURSE DETAILS\n");
  printf("1.FRONTEND DEVELOPEMENT \t\t2.BACKEND DEVELOPEMENT\t\t\t3.UI/UX DEVELOPEMENT\n");
  printf("4.FULL STACK DEVELOPEMENT\t \t5.MOBILE APP DEVELOPEMENT\t\t6.AI & MACHINE LEARNING\n");
  printf("7.DATA SCIENCE\t\t\t\t8.DIGITAL MARKETING\t\t\t9.PERSONALITY DEVELOPEMENT\n");
  printf("press => ");
  scanf("%d",&x);
  switch(x)
  {
    case 1:frontend();
    break;
    case 2: backend();
    break;
    case 3:ui();
    break;
    case 4: full_stack();
    break;
    case 5: mobile();
    break;
    case 6: ai();
    break;
    case 7: data();
    break;
    case 8: digital();
    break;
    case 9: personality();
    break;
    default :
    printf("invalid input");
  }
  printf("\nIF YOU WANT TO CHECK ANY COURSE DETAILS AGAIN PRESS Y => ");
  scanf("%s",&ch);
  }while(ch=='y');

}
void frontend()
{
  printf("Course Details =>\n");
  printf("1.HTML\t\t\t2.CSS\t\t\t\t\t3.JAVASCRIPT\t\t\t4.BOOTSTRAP\n5.LIVE PROJECTS\t\t6.INTERVIEW PRECTICE\t\t\t7.PAID INTERNSHIP\t\t8.PLACEMENT");
printf("\n\nCOURSE PERIOD => 6 MONTHS");
}
void backend()
{
  printf("Course Details =>\n");
  printf("1.c\t\t2.C++\t\t\t\t\t3.JAVA\t\t\t\t4.PHP\n5.MYSQL\t\t6.INTERVIEW PRECTICE\t\t\t7.PAID INTERNSHIP\t\t8.PLACEMENT");
printf("\n\nCOURSE PERIOD => 9 MONTHS");

}
void ui()
{
   printf("Course Details =>\n");
  printf("1.UI/UX INTRODUCTION\t\t\t2.INTERACTION DESIGN\t\t3.VISUAL DESIGNt\t\t4.INFORMATION ARCHITECTURE\n5.PROTOTYPING AND TESTING\t\t6.INTERVIEW PRECTICE\t\t7.PAID INTERNSHIP\t\t8.PLACEMENT");
printf("\n\nCOURSE PERIOD => 10 MONTHS");

}
void full_stack()
{
   printf("Course Details =>\n");
  printf("1.FRONTEND DEVELOPMENT\t\t2.BACKEND DEVELOPMENTt\t\t3.MYSQL\n6.INTERVIEW PRECTICE\t\t7.PAID INTERNSHIP\t\t8.PLACEMENT");
printf("\n\nCOURSE PERIOD => 12 MONTHS");

}
void mobile()
{
  printf("Course Details =>\n");
  printf("1.JAVA\t\t\t2.KOTLIN\t\t\t3.SWIFT\t\t\t\t4.REACT NATIVE\n5.DATABASE\t\t6.MOBILE SEQURITY\t\t7.PAID INTERNSHIP\t\t8.PLACEMENT");
printf("\n\nCOURSE PERIOD => 11 MONTHS");

}
void ai()
{
  printf("Course Details =>\n");
  printf("1.ALGEBRA\t\t\t2.LINER ALGEBRA\t\t\t3.TRIGONOMETRY\t\t\t\t4.STATISTICS\n5.CALCULUS\t\t\t6.PYTHON\t\t\t7.PAID INTERNSHIP\t\t\t8.PLACEMENT");
printf("\n\nCOURSE PERIOD => 11 MONTHS");

}
void data()
{
 printf("Course Details =>\n");
  printf("1.PYTHON\t\t\t2.STATISTICS\t\t\t3.DATA VISULIZATION\t\t4.MACHINE LEARNING\n5.BIG DATA TOOLS\t\t6.DOMAIN KNOWLEDGE\t\t7.PAID INTERNSHIP\t\t8.PLACEMENT");
printf("\n\nCOURSE PERIOD => 11 MONTHS");
}
void digital()
{
  printf("Course Details =>\n");
  printf("1.SEO\t\t2.PPC\t\t\t\t3.SMM\t\t\t\t4.CONTENT MARKETING\n5.CRO\t\t6.EMAIL MARKETING\t\t7.PAID INTERNSHIP\t\t8.PLACEMENT");
printf("\n\nCOURSE PERIOD => 11 MONTHS");

}
void personality()
{
     printf("Course Details =>\n");
  printf("1.COMMUNICATION SKILLS\t\t\t2.INTERPERSONAL SKILLS\t\t\t3.EMOTIONAL INTELLIGENCE\n4.CONFIDENCE BUILDING\t\t\t5.TIME MANAGEMENT\t\t\t6.LEADERSHIP SKILLS\n7.PAID INTERNSHIP\t\t\t8.PLACEMENT");
printf("\n\nCOURSE PERIOD => 11 MONTHS");

}
int addmission()
{ 
  int age,fee,totalfee,j;
  char name[20],fname[20],mname[20],address[100],dob[10],course[30],code[10];
  printf("NAME => ");
  fflush(stdin);
  scanf("%[^\n]s",&name);
   printf("FATHSE'S NAME => ");
   fflush(stdin);
  scanf("%[^\n]s",&fname);
   printf("MOTHER'S NAME => ");
   fflush(stdin);
  scanf("%[^\n]s",&mname);
   printf("address => ");
   fflush(stdin);
  scanf("%[^\n]s",&address);
   printf("DOB => ");
   fflush(stdin);
  scanf("%[^\n]s",&dob);
   printf("age => ");
  scanf("%d",&age);
   printf("COURSE => ");
   fflush(stdin);
  scanf("%[^\n]s",&course);
  if(fees(course)==0)
  {
  printf("invalid course");
  }
  else
  {
  printf("Total fees is => %d\n",fees(course));
  }
  printf("enter discount code => ");
  scanf("%s",&code); 
  if(code[4]=='6')
  printf("Remaing amount = %d\n",fees(course)-((fees(course)*60)/100));
  else if(code[4]=='4')
  printf("Remaing amount = %d\n",fees(course)-((fees(course)*40)/100));
  else if(code[4]=='2')
  printf("Remaing amount = %d\n",fees(course)-((fees(course)*20)/100));
  else
  printf("Remaing amount = %d\n",fees(course));
  printf("Deposit Addmission Fee => ");
  scanf("%d",&fee);
  if(code[4]=='6')
  printf("Last amount => %d",fees(course)-((fees(course)*60)/100)-fee);
  else if(code[4]=='4')
  printf("Last amount => %d",fees(course)-((fees(course)*40)/100)-fee);
  else if(code[4]=='2')
  printf("Last amount => %d",fees(course)-((fees(course)*20)/100)-fee);
  else
  printf("Last amount => %d",fees(course)-fee);
  
  
}
int fees(char *p)
{
  if(p[0]=='f'&&p[1]=='u')
  return 120000;
  else if(p[0]=='f'&&p[1]=='r')
  return 40000;
  else if(p[0]=='u'&&p[1]=='i')
  return 70000;
  else if(p[0]=='b'&&p[1]=='a')
  return 50000;
  else if(p[0]=='a'&&p[1]=='i')
  return 75000;
  else if(p[0]=='p'&&p[1]=='e')
  return 20000;
  else if(p[0]=='d'&&p[1]=='i')
  return 57000;
  else if(p[0]=='m'&&p[1]=='o')
  return 90000;
  else if(p[0]=='d'&&p[1]=='a')
  return 200;
  else
  return 0;
}

int scholarship()
{
  int start,count=0;
  char reply[10],ans[10];
  printf("if you want to get scholarship yes or no\npress => ");
  scanf("%s",&reply);
  if(reply=="no")
  printf("thank you");
  else
  {
    printf("please qualify this test :\n");
    printf("press 1 for start test=> ");
    scanf("%d",&start);
    if(start!=1)
    printf("thank you");
    else
    {
      printf("1.\nc language invented in....?\n");
      printf("A.1945\t\tB.1972\t\tC.1978\t\tD.1965\nans is => ");
      fflush(stdin);
      scanf("%c",&ans[0]);
      printf("2.\nHow many keywords in c.....?\n");
      printf("A.32\t\tB.36\t\tC.48\t\tD.57\nans is => ");
      fflush(stdin);
      scanf("%c",&ans[1]);
      printf("3.\nArry index start with.....?\n");
      printf("A.1\t\tB.n-1\t\tC.0\t\tD.5\nans is => ");
      fflush(stdin);
      scanf("%c",&ans[2]);
      printf("4.\nA pointer variable hold another variable.....?\n");
      printf("A.datatype\t\tB.value\t\tC.name\t\tD.address\nans is => ");
      fflush(stdin);
      scanf("%c",&ans[3]);
      printf("5.\nfor(i=1;i<=10;i++);\nmaximum value of i is.....?\n");
      printf("A.10\t\tB.11\t\tC.9\t\tD.8\nans is => ");
      fflush(stdin);
      scanf("%c",&ans[4]);
      printf("6.\nAuto is a.....?\n");
      printf("A.keyword\t\tB.datatype\t\tC.function\t\tD.pointer\nans is => ");
      fflush(stdin);
      scanf("%c",&ans[5]);
      printf("7.\nwhich type function not return any value.....?\n");
      printf("A.int\t\tB.void\t\tC.char\t\tD.double\nans is => ");
      fflush(stdin);
      scanf("%c",&ans[6]);
      printf("8.\nPost test loop is known as.....?\n");
      printf("A.while\t\tB.do while\t\tC.for\t\tD.nested for\nans is => ");
      fflush(stdin);
      scanf("%c",&ans[7]);
      printf("9.\nwhich function use for count length of string.....?\n");
      printf("A.strcpy()\t\tB.strcmp()\t\tC.strcat()\t\tD.strlen()\nans is => ");
      fflush(stdin);
      scanf("%c",&ans[8]);
      printf("10.\nstruct keyword used for.....?\n");
      printf("A.user defined data type\t\tB.pre defined data type\nC.user defined function\t\tD.pre defined variables\nans is => ");
      fflush(stdin);
      scanf("%c",&ans[9]);
      if(ans[0]=='b')
      count++;
      if(ans[1]=='a')
      count++;
      if(ans[2]=='c')
      count++;
      if(ans[3]=='d')
      count++;
      if(ans[4]=='b')
      count++;
      if(ans[5]=='a')
      count++;
      if(ans[6]=='b')
      count++;
      if(ans[7]=='b')
      count++;
      if(ans[8]=='d')
      count++;
      if(ans[9]=='a')
      count++;
      printf("Answer key => 1.B  2.A  3.C  4.D  5.B  6.A  7.B  8.B  9.D  10.A\n");
      printf("Your score is  = %d\n",count);
      if(count>=8)
      printf("Use this code for maximum discount => kodu60");
      else if(count>=6 && count<8)
      printf("Use this code for maximum discount => kodu40");
      else if(count>=4 && count<6)
      printf("Use this code for maximum discount => kodu20");
      else if(count>=0 && count<4)
      printf("Beta tumse na ho payega");

    }
  }
}
  




