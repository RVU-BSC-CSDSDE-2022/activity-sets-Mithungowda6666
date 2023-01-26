#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
  float x1,x2,x3,y1,y2,y3,result;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  result=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
  return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the value of x1 and y1\n");
  scanf("%f%f",x1,y1);
  printf("Enter the value of x2 and y2\n");
  scanf("%f%f",x2,y2);
  printf("Enter the value of x3 and y3\n");
  scanf("%f%f",x3,y3);
  
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{ float area;
  area= 0.5*(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

  if(area==0)
  {
    return 1;
  }
  else{return 2;}
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
  if(result==1)
  {
     printf("The given points(%f,%f),(%f,%f),(%f,%f) do not form a triangle",x1,y1,x2,y2,x3,y3);
  }
  else
  {
     printf("The given points(%f,%f),(%f,%f),(%f,%f)  forms a triangle",x1,y1,x2,y2,x3,y3);
  }
}