/*
  Write a program to check whether a given year is a leap year,
  using a function with both parameter and return type.
*/

#include <stdio.h>

int is_leap(int);

int main(void)
{
  int year;

  // Input
  printf("Enter year: ");
  scanf("%d", &year);
  printf("\n");

  int is_year_leap = is_leap(year);
  if (is_year_leap)
    printf("%d is a leap year.\n");
  else
    printf("%d is not a leap year.\n");
}

int is_leap(int year)
{
  // Logic
  return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}