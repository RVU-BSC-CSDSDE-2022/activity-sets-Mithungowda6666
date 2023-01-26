#include<stdio.h>
#include<math.h>
struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;
Camel input();
void find_weight(Camel *c); //passing address variable
void output(Camel c);

int main() {
  Camel c;
  c =  input();
  find_weight(&c);
  output(c);
  return 0;
}

Camel input() {
 Camel c;
  printf("Enter the value of Radius\n");
  scanf("%f",&c.radius);
  printf("Enter the value of Height\n");
  scanf("%f",&c.height);
  printf("Enter the value of Length\n");
  scanf("%f",&c.length);
  return (c);
}
void find_weight(Camel *c){
  float pi;
  pi= 3.14;
  c->weight = (pi*pow(c->radius,3)*sqrt(c->height * c->length));
}
void output(Camel c) {
  printf("The weight of the camel with radius: %f, height: %f, length: %f is %f",c.radius,c.length,c.height,c.weight);
}

// to run the program use gcc problem03.c -lm //