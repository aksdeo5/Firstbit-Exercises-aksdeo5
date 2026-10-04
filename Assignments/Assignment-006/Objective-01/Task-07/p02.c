/*
  Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
  10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
  respectively.

  Implementation using a function with no return type but accepting a parameter.
*/

#include <stdio.h>

void calculate_total_salary(int);

int main(void)
{
  int bs;

  // Input
  printf("Enter basic salary: ");
  scanf("%d", &bs);
  printf("\n");

  calculate_total_salary(bs);
}

void calculate_total_salary(int basic_salary)
{
  double da, ta, hra, ts;

  // Logic (Assuming user inputs a valid salary amount)
  if (basic_salary <= 5000)
  {
    da = basic_salary * 0.1;
    ta = basic_salary * 0.2;
    hra = basic_salary * 0.25;
  }
  else
  {
    da = basic_salary * 0.15;
    ta = basic_salary * 0.25;
    hra = basic_salary * 0.3;
  }

  ts = basic_salary + da + ta + hra;

  printf("Basic salary: %d\n", basic_salary);
  printf("DA: %.2lf\n", da);
  printf("TA: %.2lf\n", ta);
  printf("HRA: %.2lf\n", hra);
  printf("\n");
  printf("Total salary: %.2lf", ts);
}