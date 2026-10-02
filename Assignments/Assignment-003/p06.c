/*
  Check the given number is Perfect number or not.
  Input: n = 28
  Output: Perfect
*/

#include <stdio.h>

int main(void)
{
  int num, sum, i;

  // Input
  num = 28;

  // Logic
  sum = 0;
  i = 1;
  while (i <= num / 2)
  {
    if (num % i == 0)
      sum += i;

    i++;
  }

  if (sum == num)
    printf("%d is a perfect number.\n", num);
  else
    printf("%d is not a perfect number.\n", num);

  return 0;
}