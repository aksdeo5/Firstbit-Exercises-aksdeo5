/*
  Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
  10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
  respectively.

  Implementation using a function with both parameter and return type.
*/

#include <stdio.h>

double calc_total_sal(int);

int main(void)
{
  int basic_sal;

  // Input
  printf("Enter basic salary: ");
  scanf("%d", &basic_sal);
  printf("\n");

  double total_sal = calc_total_sal(basic_sal);

  printf("Total salary: %.2lf\n", total_sal);
}

double calc_total_sal(int basic_sal)
{
  double da, ta, hra, ts;
  // Logic (Assuming user inputs a valid salary amount)
  if (basic_sal <= 5000)
  {
    da = basic_sal * 0.1;
    ta = basic_sal * 0.2;
    hra = basic_sal * 0.25;
  }
  else
  {
    da = basic_sal * 0.15;
    ta = basic_sal * 0.25;
    hra = basic_sal * 0.3;
  }

  ts = basic_sal + da + ta + hra;

  return ts;
}