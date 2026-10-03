/*
  Write a program to check whether a given year is a leap year,
  using a function with both parameter and return type.
*/

#include <stdio.h>

int prompt_year_check_leap(int);

int main(void)
{
  int year;

  // Input
  printf("Enter year: ");
  scanf("%d", &year);
  printf("\n");

  int is_leap = prompt_year_check_leap(year);
  if (is_leap)
    printf("%d is a leap year.\n");
  else
    printf("%d is not a leap year.\n");
}

int prompt_year_check_leap(int year)
{
  // Logic
  return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}