#include <stdio.h>
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main()
{
  int n;
  n = input_n();
  int a[n],avg;
  input(n,a);
  avg = odd_average(n,a);
  output(avg);
  return 0;
}

int input_n()
{
  int x;
  printf("Enter the size of the array ");
  scanf("%d",&x);
  return x;
}
void input(int n, int a[n])
{
  printf("Enter the elements of the array ");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
float odd_average(int n, int a[n])
{
  float sum = 0,avg=0,r=0;
  for(int i = 0;i<n;i++)
    {
      if((a[i]%2)!=0)
      {
        r++;
        sum = sum+a[i];
      }
    }
  avg = sum/r;
  return(avg);
}
void output(float avg)
{
  printf("The average of odd elements is %f",avg);
}