/*
  Check the given number is prime or not.
  Input: n = 7
  Output: Prime

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void check_prime(void);

int main(void)
{
  check_prime();

  return 0;
}

void check_prime(void)
{
  int num, is_prime;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  // Logic
  is_prime = 1;

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
}