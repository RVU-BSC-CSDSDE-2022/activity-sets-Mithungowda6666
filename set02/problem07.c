#include <stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

float main()
{
  Triangle t;
  t = input_triangle();
  find_area(&t);
  output(t);
  return 0;
}
Triangle input_triangle()
{
 Triangle t;
 printf("Enter the Value of the Base\n");
 scanf("%f",&t.base);
 printf("Enter the value of the altitude\n");
 scanf("%f",&t.altitude);
 return t;
}
 void find_area(Triangle *t)
 {
   t->area = (t->base * t->altitude) / 2;
 }

void output(Triangle t) {
  printf("The area of triangle with base %2.1f and altitude %2.1f is %2.1f",t.base,t.altitude,t.area);
}