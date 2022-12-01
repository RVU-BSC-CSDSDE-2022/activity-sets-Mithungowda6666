#include <stdio.h>
int important();
void  compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main()  
{
  int a,b,c,l;
  a = input();
  b = input();
  c = input();
  compare(a,b,c,&l);
  output(a,b,c,l);
}

  int input() 
{
    int x;
    printf("enter the number\n");
    scanf("%d", &x);
    return(x);
}
//ude && operator
   void compare(int a, int b, int c, int *largest) {
     if(a>b)
     {
      if (a>=b && a>=c){*largest = a;}
      else{*largest = c;}
     }
     else
     {
       if(b>=a && b>=c){*largest = b;}
       else{*largest = c;}
       }
        }
     void output(int a, int b, int c, int largest){
       printf("the largest of %d,%d and %d is %d.",a,b,c,largest);
     }
   
