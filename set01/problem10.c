#include <stdio.h>
#include <string.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main(){
  char string1[100],string2[100];
  int result = 0;
  input_two_strings(string1,string2);
  
  result = stringcompare(string1,string2);
  output(string1,string2,result);
  return 0;
}

void input_two_strings(char *string1, char *string2){
  printf("Enter the first string ");
  scanf("%s", string1);
  printf("Enter the second string ");
  scanf("%s", string2);

  }

int stringcompare(char *string1, char *string2)
{
 int result=0,i=0,flag=0;
  while(string1[i]!='\0' && string2[i]!='\0')
    {
      if(string1[i]!=string2[i])
      {
        flag=1;
        break;
      }
      i++;
    }
  if(flag==0)
  {  if(string1[i]=='\0' && string2[i]=='\0')
    return 0;
  if(string1[i]=='\0')
    return 1;
  if(string2[i]=='\0')
    return 2;
  }
  if(flag==1)
  {
    if(string1[i]>string2[i])
      return 1;
    else
      return 2;
  }
  return(flag);
}

void output(char *string1, char *string2, int result){
  if(result ==0)
  {
    printf("both words are equal");
  }
  else
  {
    if (result == 1)
    {
      printf("%s is greater than %s", string1, string2);
    }
    else
    {
      printf("%s is greater than %s", string2,string1);
    }
  }
}


