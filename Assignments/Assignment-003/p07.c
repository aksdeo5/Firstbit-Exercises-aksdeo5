/*
  Find factorial of given number.
  Input: n = 5
  Output: 120
*/

#include <stdio.h>

int main(void)
{
  int num, fact, i;

  // Input
  num = 5;

  // Logic
  fact = 1;
  i = num;
  while (i)
    fact *= i--;

  printf("Factorial of %d: %d\n", num, fact);

  return 0;
}