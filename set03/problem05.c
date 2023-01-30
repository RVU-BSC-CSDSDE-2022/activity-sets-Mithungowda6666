#include<stdio.h>
int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int input_array_size()
{
  int a;
  printf("Enter the size of the array");
  scanf("%d",&a);
  return 0;
}
void init_array(int n, int a[n])
{
  int i;
  for(i=0;i<n;i++)
    {
      a[i] = input_array_size();
    }
}
void erotosthenes_sieve(int n, int a[n])
{
  for(i=2;i<=sqrt(n);i++)
    {
      if(a==2)
        for(j=i*2;j<n;j++)
          {
            a[i]=-1;
          }
    }
}
void output(int n, int a[n])
{
  printf("The output is %d")
}