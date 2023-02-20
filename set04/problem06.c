#include<stdio.h>
#include<string.h>
void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main()
{
  char a[100];
  int no_wrds;
  input_string(a);
  no_wrds = count_words(a);
  output(a,no_wrds);
  return 0;
}

void input_string(char *a)
{
  printf("Enter the string : ");
  if(fgets(a,100,stdin));
  if(a[strlen(a)-1] == '\n')
  {
    a[sterlen(a)-1] = '\0';
  }
}

int count_words(char *string)
{
  int i = 0;
  char *token = strtok(string,"");
  while(token != NULL)
    {
      i++;
      token = strtok(NULL,"");
    }
  return i;
}

void output(char *string, int no_words)
{
  printf("The Number of words in %s is %d",string,no_words);
}