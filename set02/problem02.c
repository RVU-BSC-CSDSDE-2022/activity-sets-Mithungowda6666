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
  output(a,b,c,d);
    } 
int input_side() {
  int a;
  printf("Enter the value");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c) {
        int isscalene;
     if(a != b && b != c && c != a){
       return 1;
       }
      else{
        if(a==b && b==c && c==a){
       return 2;
          }
        else {return 3;}
        }
  }
void output(int a, int b, int c, int isscalene) {
     if(isscalene = 1)
        {  
          printf("the given triangle with sides %d,%d,%d is not scalene Triangle\n",a,b,c);
        }  
         else {
           printf("It's a Scalene Triangle\n");  
         }
  }
 