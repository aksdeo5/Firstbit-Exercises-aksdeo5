/*
  Check the given number is prime or not.
  Input: n = 7
  Output: Prime
*/

#include <stdio.h>

int main(void)
{
  int num, is_prime = 1;

  // Input
  num = 31;

  // Logic
  if (num < 2)
    is_prime = 0;
  else
  {
    int i = 2;
    while (i <= num / 2)
      if (num % i++ == 0)
      {
        is_prime = 0;
        break;
      }
  }

  if (is_prime)
    printf("%d is a prime number.\n", num);
  else
    printf("%d is not a prime number.\n", num);

  return 0;
}