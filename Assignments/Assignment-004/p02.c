/*
  Print prime numbers in the given range 1 to n.
*/

#include <stdio.h>

int main(void)
{
  int end;

  // Input
  end = 100;

  // Logic
  for (int num = 1; num <= end; num++)
  {
    if (num < 2)
      continue;

    int is_prime = 1;
    for (int i = 2; i <= num / 2; i++)
      if (num % i == 0)
      {
        is_prime = 0;
        break;
      }

    if (is_prime)
      printf("%d\n", num);
  }
}