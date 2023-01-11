#include<stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

void input_string(char *a)
{
  print("Enter the first string ");
  scanf("%s",&a);
}
void str_reverse(char *str, char *rev_str)
{
  int i,l=strlen(str)
  char str[50],str;
  for(i=0;i<l/2;i++)
    {
      str=str[i];
      str[i] = str[l-1-i];
      str[l-1-i] = str;
    }
}
  
