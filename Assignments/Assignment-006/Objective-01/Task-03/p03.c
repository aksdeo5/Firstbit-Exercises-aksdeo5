/*
  Write a program to check whether a given year is a leap year,
  using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_year_check_leap(void);

int main(void)
{
  int is_leap = prompt_year_check_leap();
  if (is_leap)
    printf("%d is a leap year.\n");
  else
    printf("%d is not a leap year.\n");
}

int prompt_year_check_leap(void)
{
  int year;

  // Input
  printf("Enter year: ");
  scanf("%d", &year);
  printf("\n");

  // Logic
  return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}