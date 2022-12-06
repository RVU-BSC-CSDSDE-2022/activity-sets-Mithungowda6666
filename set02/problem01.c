#include<stdio.h>
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main() {
  float base, height, area;
  base = input();
  height = input();
  area = find_area(base, height, *area);
  output( base,  height,  area); 
    return 0;
}
void input(float base, float height){
  float base, height;
  printf("Enter the base of the Triangle\n");
  scanf("%f", &base);
  printf("Enter the height of the Triangle\n");
  scanf("%f" ,&height);  
}
void find_area(float base , float height, float *area){

  *area =(base*height)/2;
 return area;
}
void output(float base, float height, float area){
  printf("the area of the triangle with base %f and height %f is %f",base,height,area);
}
