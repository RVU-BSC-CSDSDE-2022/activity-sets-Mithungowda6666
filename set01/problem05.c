#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main(void)  
{
  int a, b, c, l;
  a = input();
  b = input();
  c = input();
  l = compare(a,b,c);
  output(a,b,c,l);
}
int input()  
{
  int x;
  printf("enter the number\n");
  scanf("%d",&x);
  return (x);
}
//Use && operator
int compare(int a, int b, int c ) 
{
    if(a>=b && a>=c) {return(a);}
    else {
  
    if(b>=c && b>=c) {return(b);}
    else{return(c);}
  }
}


void output(int a, int b, int c, int largest)
{
  printf("print largest of %d, %d and %d is %d", a, b, c ,largest);
  
}
