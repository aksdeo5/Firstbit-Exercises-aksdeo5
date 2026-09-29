/*
  Write a program to check whether a given year is a leap year.
*/

#include <stdio.h>

int main(void)
{
  int year;

  // Input
  year = 2004;

  // Logic
  if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    printf("%d is a leap year\n");
  else
    printf("%d is not a leap year\n");
}