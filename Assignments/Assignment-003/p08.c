/*
  Check the given number is Strong number or not.
  Input: n = 145
  Output: Strong

  Note: Strong number (also called a Peterson number) is a number where
  the sum of the factorials of its individual digits equals the number itself.
*/

#include <stdio.h>

int main(void)
{
  int num, sum = 0, n;

  // Input
  num = 145;

  // Logic
  n = num;
  while (n)
  {
    int digit = n % 10;
    int fact = 1;

    int i = digit;
    while (i)
      fact *= i--;

    sum += fact;

    n /= 10;
  }

  if (sum == num)
    printf("%d is a strong number.\n", num);
  else
    printf("%d is not a strong number.\n", num);

  return 0;
}