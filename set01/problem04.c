#include <stdio.h>
void change(int r, int m, int *sum);

int main()  
{
     int r, m, sum;
     r=input();
     m=input();
     add(r, m, &sum);
     output(r,m,sum);
     return 0;
}

int input()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    return n;
}

void add(int r, int m, int *sum)
{
  *sum=r+m;
}

void output(int r, int m, int sum)
{
  printf("the sum of %d and %d is %d\n", r, m, sum);
  
}