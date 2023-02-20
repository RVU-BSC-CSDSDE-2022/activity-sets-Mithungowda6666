#include<stdio.h>
#include<math.h>
typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);

Fraction input_fraction()
{
  Fraction f;
  printf("Enter the value of the numerator ");
  scanf("%d",&f.num);
  printf("Enter the value of the denominator ");
  scanf("%d",&f.den);
}

int find_gcd(int a, int b)
{
  int i,gcd;
  for(i=1;i<=a && i<=b;i++)
    {
      if(a%i==0 && b%i==0)
      {gcd=i;}
    }
  return(gcd);
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction sum;
  int a = (f1.den*f2.den)/find_gcd(f1.den,f2.den);
  sum.num = (a/f1.den) * f1.num + (a/f2.den)*f2.num;
  sum.den = a;
   return(sum);
}
void output(Fraction f1, Fraction f2, Fraction sum)
{
  printf("%d/%d + %d/%d = %d/%d",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}