#include<stdio.h>
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

int input_n()
{
  int n;
  printf("Enter the number of triangle's");
  if(scanf("%d",&n)!=1)
  {
    printf("Error");
    exit(0);
  }
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
  if(scanf("%f",&t.height)!=1)
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
  printf("Enter the area\n");
  if(sacnf("%f",&t.area)!=1)
  {
    printf("error");
    exit(0);
  }
}
void find_area(Triangle *t)
{
  int
}