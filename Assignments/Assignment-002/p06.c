/*
  Accept a number and check if it is divisible by 3, 5, or both.
  (Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
  both" or” Divisible by None”)
*/

#include <stdio.h>

int main(void)
{
  int num;

  // Input
  num = 15;

  // Logic
  if (num % 3 == 0)
    if (num % 5 == 0)
      printf("%d is divisible by both\n", num);
    else
      printf("%d is divisible by 3 but not by 5\n", num);
  else if (num % 5 == 0)
    printf("%d is divisible by 5 but not by 3\n", num);
  else
    printf("%d is divisible by None\n", num);
}