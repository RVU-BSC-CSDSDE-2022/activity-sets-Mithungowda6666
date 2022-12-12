#include <stdio.h>
#include <math.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main() {
  float radius, height, length , weight;
  input_camel_details(&radius, &height, &length);
  weight = find_weight(radius,height,length);
    output(radius,height,length,weight);
    
}
void input_camel_details(float *radius, float *height, float *length){
  float weight;
  printf("Enter the value of the Radius");
  scanf("%f",radius);
  printf("Enter the value of the Height");
  scanf("%f",height);
  printf("Enter the value of Length");
  scanf("%f",length);  

}
float find_weight(float radius, float height, float length){
   float pi = 3.14;
  float weight;
  weight =pi*pow(radius,3)*sqrt(height * length);
   return weight;

}
void output(float radius, float height, float length, float weight){
  printf("The weight of the camel with radius: %f height:%f, length:%f is %f",radius,height,length,weight);
}
// to compile the program usegcc problem02.c -lm -o problem02//
//to get the output use ./problem02//