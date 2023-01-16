#include<stdio.h>
#include<stdlib.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main()
{
  int n=input_n();
  Triangle t[n],smallest;
  input_n_triangles(n,t);
  find_n_areas(n,t);
  smallest= find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0;
}

int input_n()
{
  int n;
  printf("Enter the number of triangle's");
  if(scanf("%d",&n)!=1)
  {
    printf("Error");
    exit(0);
  }
  return(n);
}
Triangle input_triangle()
{
  Triangle t;
  printf("Enter the Value of the base\n");
  if(scanf("%f",&t.base)!=1)
  {
    printf("Error");
    exit(0);
  }
  printf("Enter the Value of the height\n");
  if(scanf("%f",&t.altitude)!=1)
  {
    printf("Error");
    exit(0);
  }
  return(t);
}

void input_n_triangles(int n, Triangle t[n])
{
  int i;
  for(i=0;i<n;i++)
    {
      t[i]=input_triangle();
    }
  }
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void find_n_areas(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle i,smallest = t[0];
  for(int i=1;i<n;i++)
    {
      if(t[i].area < smallest.area)
      {smallest=t[i];}
    }
  return(smallest);
}
void output(int n, Triangle t[n], Triangle smallest)
{
  printf("The smallest of all Triangle  areas is %f",t->area);
}