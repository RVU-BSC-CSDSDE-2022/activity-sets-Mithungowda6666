#include <stdio.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main()
{
  int n,index;
  n =  input_size();
  int a[n];
   input_array(n,a);
  index = find_largest_index(n,a);
  output(index);
  return 0;
}

int input_size()
{
  int n;
  printf("Enter the array size\n");
  scanf("%d",&n);
  return n;
}

int find_largest_index(int n, int a[n])
{
  int index=0;
  int largest = a[0];
  for(int i=0;i<n;i++)
    {
      if(a[i]>largest)
      {
        largest = a[i];
        index=i;
      }
    }
  return(index);
}
void output(int index)
{
  printf("The largest of the largest number in array is %d",index);
}