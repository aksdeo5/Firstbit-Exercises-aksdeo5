/*
  Write a program to check whether a given year is a leap year,
  using a function with no parameters and no return type.
*/

#include <stdio.h>

void check_leap_year(void);

int main(void)
{
  check_leap_year();
}

void check_leap_year(void)
{
  int year;

  // Input
  printf("Enter year: ");
  scanf("%d", &year);
  printf("\n");

  // Logic
  if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    printf("%d is a leap year.\n");
  else
    printf("%d is not a leap year.\n");
}