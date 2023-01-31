#include<stdio.h>
#include<math.h>
int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main()
{
  int n;
  n=input_array_size();
  
  int a[n+1];
  init_array(n, a);
  erotosthenes_sieve(n,a);
  output(n,a);
  return 0;
}
int input_array_size()
{
  int a;
  printf("Enter the size of the array");
  scanf("%d",&a);
  return a;
}
void init_array(int n, int a[n])
{
  int i;
  for(i=0;i<n;i++)
    {
      a[i] = 1 ;
    }
}
void erotosthenes_sieve(int n, int a[n])
{
  int i,j;
  for(i=2;i<sqrt(n);i++)
    {
      if(a[i]!=0)
        for(j=i;j<n/i;j++)
          {
            a[j*i]=0;
          }
    }
}
void output(int n, int a[n])
{ int i;
  
  for(i=0;i<n;i++)
    { 
      if(a[i]!=0)
      printf("%d\t",a[n-1]);
    }
}