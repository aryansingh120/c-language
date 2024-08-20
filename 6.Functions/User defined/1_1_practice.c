#include<stdio.h>
void cources();
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
int main()
{
  int z;
  printf("\n\n");
  printf("\t\tWELCOME TO KODU FAMILY\n");
  printf("\t\tWELCOME TO KODU FAMILY\n");
  printf("Please choose any option\n");
  printf("1.COURCES\t\t2.ADDMISSION\n");
  printf("PRESS => ");
  scanf("%d",&z);
  switch(z)
  {
    case 1:
    cources();
    break;
    case 2: addmission();
    break;

  }
}
void cources()
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
  int age,fee,totalfee;
  char name[20],fname[20],mname[20],address[100],dob[10],course[30];
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
  printf("Deposit Addmission Fee => ");
  scanf("%d",&fee);
  printf("Remaining amount => %d",fees(course)-fee);
  
  
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


  




