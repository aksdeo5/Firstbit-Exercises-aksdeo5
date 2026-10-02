/*
  Find Sum of first and last digit of given number.
  Input: n = 12345
  Output: 6 (1 + 5)
*/

#include <stdio.h>

int main(void)
{
  int num, sum, n;

  // Input
  num = 12345;

  // Logic
  sum = 0;
  n = num;
  while (n)
  {
    int digit = n % 10;

    if (n == num || n / 10 == 0)
      sum += digit;

    n /= 10;
  }

  printf("The sum of the first and the last digit of %d is %d.\n", num, sum);

  return 0;
}