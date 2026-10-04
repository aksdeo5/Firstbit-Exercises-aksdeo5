/*
  Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
  10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
  respectively.

  Implementation using a function with no parameter but return type.
*/

#include <stdio.h>

double prompt_basic_sal_calc_total(void);

int main(void)
{
  double total_sal = prompt_basic_sal_calc_total();

  printf("Total salary: %.2lf\n", total_sal);
}

double prompt_basic_sal_calc_total(void)
{
  int bs;
  double da, ta, hra, ts;

  // Input
  printf("Enter basic salary: ");
  scanf("%d", &bs);
  printf("\n");

  // Logic (Assuming user inputs a valid salary amount)
  if (bs <= 5000)
  {
    da = bs * 0.1;
    ta = bs * 0.2;
    hra = bs * 0.25;
  }
  else
  {
    da = bs * 0.15;
    ta = bs * 0.25;
    hra = bs * 0.3;
  }

  ts = bs + da + ta + hra;

  return ts;
}