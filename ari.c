string ari(string s)
{
s=get_string("Text: ");
int letterscount=0;
int wordcount=1;
int sentencecount=0;
for(int i=0;i<strlen(s);i++)
{
if((text[i]>='a'&&text[i]<='z')||(text[i]>='A'&&text[i]<='Z'))
 {
  letterscount++;
  }
  else if(text[i]==' ')
  {
   wordcount++;
   }
   else if(text[i]=='.'||text[i]==!||text[i]=='?')
   {
   sentencecount++;
   }
  }
  float grade=(4.71*(float)letterscount/(float)wordcount)+(0.5*(float)wordcount/(float)sentencecount)-21.43;
  if(grade<=1&&grade>0)
  printf("Kindergarten\n");
  else if(grade<=2&&grade>1)
  printf("first/secondgrade\n");
  else if(grade<=3&&grade>2)
  printf("thirdgrade\n");
  else if(grade<=4&&grade>3)
  printf("fourthgrade\n");
  else if(grade<=5&&grade>4)
  printf("fifthgrade\n");
  else if(grade<=6&&grade>5)
  printf("sixthgrade\n");
  else if(grade<=7&&grade>6)
  printf("seventhgrade\n");
  else if(grade<=8&&grade>7)
  printf("eighthgrade\n");
  else if(grade<=9&&grade>8)
  printf("ninthgrade\n");
  else if(grade<=10&&grade>9)
  printf("tenthgrade\n");
  else if(grade<=11&&grade>10)
  printf("eleventhgrade\n");
  else if(grade<=12&&grade>11)
  printf("twelfthgrade\n");
  else if(grade<=13&&grade>12)
  printf("collegestudent\n");
  else
  printf("Proffessor");
  }

