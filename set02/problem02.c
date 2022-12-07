#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
 int main ()
{
  int a, b, c,d;
  a = input_side();
  b = input_side();
  c = input_side(); 
  d = check_scalene(a,b,c);
  output(a,b,c,d)
    } 
int input_side() {
  int a;
  printf("Enter the value");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c) {
        int isscalene;
     if(a != b && b != c && c != a)
       return 1;
       return 2;

  
           
  
  }
void output(int a, int b, int c, int isscalene) {
     if(isscalene = 1)
        {  
          printf("It's a Scalene Triangle\n");  
        }  
         else {
           printf("the given triangle with sides %d,%d,%d is not scalene Triangle\n");
         }
  }
