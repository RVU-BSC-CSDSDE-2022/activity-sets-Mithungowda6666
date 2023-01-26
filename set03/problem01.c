#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main()
{
  float x1,x2,y1,y2,distance;
  input(&x1,&y1,&x2,&y2);
  distance=find_distance(x1,y1,x2,y2);
  output(x1,y1,x2,y2,distance);
  return 0;
}
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter the value for x1\n");
  if(scanf("%f",x1)!=1)
  {
    printf("Error");
    exit(0);
  }
   printf("Enter the value for y1\n");
  if(scanf("%f",y1)!=1)
  {
    printf("Error");
    exit(0);
  }
   printf("Enter the value for x2\n");
  if(scanf("%f",x2)!=1)
  {
    printf("Error");
    exit(0);
  }
   printf("Enter the value for y2\n");
  if(scanf("%f",y2)!=1)
  {
    printf("Error");
    exit(0);
  }
}
float find_distance(float x1, float y1, float x2, float y2)
{
  float dis;  
  dis = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  return(dis);
}
void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("The distance between point (%f, %f) and (%f, %f) is %f",x1,y1,x2,y2,distance);
}
// to run the program use gcc problem01.c -lm //