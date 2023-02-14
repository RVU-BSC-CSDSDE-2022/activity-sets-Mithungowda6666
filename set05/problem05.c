#include<stdio.h>
#include<math.h>
int input(int x);
float borga_X(int x);
void output(int x, float result);

int main()
{
  int x = input();
  float result = borga_X(x);
  output(x,result);
  return 0;
}

int input(int x)
{
  printf("Enter the number : ");
  scanf("%f",&x);
  return x;
}
float borga_X(int x)
{
  float sum = 0.0,c = 1.0;
  int i;
  for(i=2;c>0.000001;i=i+2)
    {
      sum = sum+c;
      c = x*c/(i*(i+1));
    }
  return(sum);
}
void output(int x, float result)
{
  printf("Borga(%d) = %2.6f\n",x,result);
}