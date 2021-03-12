//WAP to find the sum of n fractions.
#include<stdio.h>
typedef struct
{
   int numerator;
   int denominator;
}fraction;

int input_n()
{
   int n;
   printf("Enter the number of fractions you wish to add:");
   scanf("%d",&n);
   return n;
}

void input_fractions(int n, fraction f[n])
{
   for(int i=0;i<n;i++)
   {
      printf("Enter the numerator and denominator of fraction %d :",i+1);
      scanf("%d%d",&f[i].numerator,&f[i].denominator);
   }
}

fraction num_den(int n,fraction f[n])
{
   int final_den=1,final_num=0,gcd;
   for(int i=0;i<n;i++)
   {
     final_den *= f[i].denominator;
   }
   for(int i=0;i<n;i++)
   {
     final_num += (f[i].numerator) * (final_den/f[i].denominator);
   }
   fraction n_d={final_num,final_den};
   gcd=find_gcd(n_d.numerator,n_d.denominator);
   n_d.numerator=n_d.numerator/gcd;
   n_d.denominator=n_d.denominator/gcd;
   return n_d;
}

int find_gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
           a -= b;
        else
           b -= a; 
    }
    return a;
}

void output(int n,fraction f[n], fraction n_d) 
{
    for(int i=0;i<n;i++)
   {
      printf("%d/%d",f[i].numerator,f[i].denominator);
      if(i<n-1)
        printf(" + ");
      else if(i==n-1)
        printf(" = %d/%d",n_d.numerator,n_d.denominator);
      else
        NULL;
    }
}

int main()
{
  int n;
  n=input_n();
  fraction f[n],n_d;
  input_fractions(n,f);
  n_d=num_den(n,f);
  output(n,f,n_d);
  return 0;
}
