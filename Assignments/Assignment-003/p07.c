/*
  Find factorial of given number.
  Input: n = 5
  Output: 120
*/

#include <stdio.h>

int main(void)
{
  int num, fact = 1;

  // Input
  num = 5;

  // Logic
  for (int i = num; i >= 1; i--)
    fact *= i;

  printf("Factorial of %d: %d\n", num, fact);

  return 0;
}