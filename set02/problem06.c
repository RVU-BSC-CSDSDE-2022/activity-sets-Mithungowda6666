#include<stdio.h>
#include<string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
  char str[100],rev_str[100];
  input_string(str);
  str_reverse(str,rev_str);
  output(str,rev_str);
  return 0;
}

void input_string(char *a)
{
  printf("Enter the first string ");
  scanf("%s",a);

}
void str_reverse(char *str, char *rev_str)
{
   char l,i;
   for(i=0;str[i]!='\0';i++);
   printf("the lenght of string is %d\n",i);
   l=i;
   for(i=0;i<l;i++)
    {
       rev_str[i]=str[l-i-1];
    }
   rev_str[i-l-1]='\0';
}

void output(char *a,char *rev_str)
{
  printf("The reverse of given word is %s",a);
}
  
