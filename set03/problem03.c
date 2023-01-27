#include<stdio.h>
#include<stdlib.h>
int input_number();
int is_prime(int n);
void output(int n, int result);

int main()
{
  int n,result;
  n=input_number();
  result=is_prime(n);
  output(n,result);
  return 0;
}

int input_number()
{
  int a;
  printf("Enter the number\n");
  scanf("%d",&a);
  return a;
}
int is_prime(int n)
{
  int i,flag=0;
  if(n==0 || n==1)
  {
    flag = 0;
  }
  for(i=2;i<=n/2;i++)
    {
      if(n%i==0)
      {
        flag=1;
        break;
      }
    }
  return(flag);
}
void output(int n, int result)
{
  if(result==0)
  {
    printf("The given number %d is prime",n);
  }
  else
  {
      printf("The given number %d is not prime",n);
  }
}