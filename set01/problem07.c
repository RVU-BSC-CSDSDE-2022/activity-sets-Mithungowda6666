#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main(){
  int n,sum;
  n = input_n();
  sum = sum_n_nos(n);
  output(n,sum);
  
}
int input_n(){
  int x;
  printf("enter the the number\n");
  scanf("%d" , &x);
  return(x);
}

int sum_n_nos(int n) {
  int sum = 0,i;
  for(i = 1;i<=n;i++)
  {
    sum = sum+i;
  }
  return(sum);
}
void output(int n, int sum){
    int i;
  printf("The sum of %d",1);
  for(i = 2;i<=n;i++)
  {
    printf("+%d" , i);
  }
  printf(" is %d", sum);
}