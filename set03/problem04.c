#include<stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);

int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}

int input()
{
  int a;
  printf("Enter the Number : ");
  scanf("%d",&a);
  return(a);
}
int find_fibo(int n)
{
  int i,x=0,y=1;
  int z;
  for(i=1;i<n;i++)
    {
      z=x+y;
      x=y;
      y=z;
    }
  return z;
}
void output(int n, int fibo)
{
  printf("the fibo(%d) = %d",n,fibo);
}