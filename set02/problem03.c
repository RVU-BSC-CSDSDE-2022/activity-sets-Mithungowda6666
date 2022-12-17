#include<stdio.h>
#include<stdlib.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int input_number() {
  int n;
  printf("Enter the value");
  if(scanf("%d",&n)!=1)
  {
    printf("error");
    exit(0);
  }
  return(n);
}
int is_composite(int n) {
  int result,i;
  if(n<1)
  {
   return(1);
  }
  else {
    if(n==1)
    {
      return(2);
    }
  else
     {
    for(i=2;i<=(n/2);i++)
    {
      if((n%i)==0){
        return(3)
    }
   }
  }
 }
}
void output(int n, int result){
  if(result==1){
    printf("enter the number greater than 1");
  }
  else{
    if(result==2){
      printf("the number 1 is neither prime nor composite");
    }
    else{
      printf("the given number is ")
    }
  }
}
