/*
  Write a program to check whether a given year is a leap year,
  using a function with no return type but accepting a parameter.
*/

#include <stdio.h>

void prompt_year_check_leap(int);

int main(void)
{
  int year;

  // Input
  printf("Enter year: ");
  scanf("%d", &year);
  printf("\n");

  prompt_year_check_leap(year);
}

void prompt_year_check_leap(int year)
{
  if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    printf("%d is a leap year.\n");
  else
    printf("%d is not a leap year.\n");
}