#include <stdio.h>
#include <math.h>
double input();
double square_root(double n);
void output(double n, double sqrroot);

int main(){
  double n = input();
  double sq = square_root(n);
  output(n,sq);
}

double input(){
  double a;
  printf("Enter a number");
  scanf("%lf", &a);
  return(a);
}

double square_root(double n){
 int x=n
 int y=1
  while (x > y){
   x = (x + y)/2;
   y = n/2
  }
  return x;
}
void output(double n, double sqrroot){
  printf("sqare root of %.2lf is %.2lf",n,sqrroot);
}
