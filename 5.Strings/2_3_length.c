#include<stdio.h>
#include<string.h>
int main()
{
  int i,count=0;
  char a[59];
  printf("enter sttring\n");
  fgets(a,59,stdin);
  //scanf("%[^\n]s",a);

  for(i=0;a[i]!='\0' && a[i]!='\n';i++)
  {
    count++;
    
  }
  printf("%d",count);
  return 0;
}
/*jab hum input k lie fgets() function ka use krte h input lene k lie to fgets() me new line character('\n) in built hota h
isle jab hum string ki length count krte h to length 1 jyada aati h kyoki fgets() new line character ko bhi count kr leta h
*/