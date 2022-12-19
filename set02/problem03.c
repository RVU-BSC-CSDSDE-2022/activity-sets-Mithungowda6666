#include<stdio.h>
#include<stdlib.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int main() {
  int n,result;
  n=input_number();
  result=is_composite(n);
  output(n,result);
  return 0;
}

int input_number() {
  int n;
  printf("Enter the value\n");
  if(scanf("%d",&n)!=1)
  {
    printf("error");
    exit(0);
  }
  return(n);
}
int is_composite(int n) {
  int i, count=0;
  for(i=1;i<n;i++)
   if(n%i == 0){
     count = count+1;
   }
  return count;
  }
void output(int n, int result) {
  if(n==1){
       printf("1 is neihter prime or composite"); 
  }
  else if(result==2)
    printf("%d is a composite number\n",n);
  else
    printf("%d is a prime number\n",n);
}
  