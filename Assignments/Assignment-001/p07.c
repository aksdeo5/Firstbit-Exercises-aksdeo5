/*
  Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
  10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
  respectively.
*/

#include <stdio.h>

int main(void)
{
  int bs;
  double da, ta, hra, ts;

  // Input
  bs = 29000;

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

  printf("Basic salary: %d\n", bs);
  printf("DA: %.2lf\n", da);
  printf("TA: %.2lf\n", ta);
  printf("HRA: %.2lf\n", hra);
  printf("\n");
  printf("Total salary: %.2lf", ts);
}