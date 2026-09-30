/*
  Check the given number is Armstrong number or not..
  Input: n = 153
  Output: Armstrong
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
  int num, sum, count, n;

  // Input
  num = 153;

  // Logic
  count = 0;
  n = num;
  while (n)
  {
    count++;
    n /= 10;
  }

  sum = 0;
  n = num;
  while (n)
  {
    int digit = n % 10;
    sum += pow(digit, count);
    n /= 10;
  }

  if (sum == num)
    printf("%d is an Armstrong number.\n", num);
  else
    printf("%d is not an Armstrong number.\n", num);

  return 0;
}