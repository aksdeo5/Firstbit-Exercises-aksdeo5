/*
  Check the given number is Perfect number or not.
  Input: n = 28
  Output: Perfect
*/

#include <stdio.h>

int main(void)
{
  int num, sum = 0;

  // Input
  num = 28;

  // Logic
  for (int i = 1; i <= num / 2; i++)
    if (num % i == 0)
      sum += i;

  if (sum == num)
    printf("%d is a perfect number.\n", num);
  else
    printf("%d is not a perfect number.\n", num);

  return 0;
}