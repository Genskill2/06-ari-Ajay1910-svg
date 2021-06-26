 string ari(string s)
{
 s=get_string("Text: ");
int letterscount=0;
int wordcount=1;
int sentencecount=0;
for(int i=0;i<strlen(s);i++)
{
if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
 {
  letterscount++;
  }
  else if(s[i]==' ')
  {
   wordcount++;
   }
   else if(s[i]=='.'||s[i]==!||s[i]=='?')
   {
   sentencecount++;
   }
  }
  float grade=(4.71*(float)letterscount/(float)wordcount)+(0.5*(float)wordcount/(float)sentencecount)-21.43;
  if(grade<=1&&grade>0)
  printf("Kinder garten\n");
  else if(grade<=2&&grade>1)
  printf("first/ secondgrade\n");
  else if(grade<=3&&grade>2)
  printf("third grade\n");
  else if(grade<=4&&grade>3)
  printf("fourth grade\n");
  else if(grade<=5&&grade>4)
  printf("fifth grade\n");
  else if(grade<=6&&grade>5)
  printf("sixth grade\n");
  else if(grade<=7&&grade>6)
  printf("seventh grade\n");
  else if(grade<=8&&grade>7)
  printf("eighth grade\n");
  else if(grade<=9&&grade>8)
  printf("ninth grade\n");
  else if(grade<=10&&grade>9)
  printf("tenth grade\n");
  else if(grade<=11&&grade>10)
  printf("eleventh grade\n");
  else if(grade<=12&&grade>11)
  printf("twelfth grade\n");
  else if(grade<=13&&grade>12)
  printf("college student\n");
  else
  printf("Proffessor");
  }

