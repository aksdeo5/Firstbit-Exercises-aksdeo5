/*
  Check the given number is prime or not.
  Input: n = 7
  Output: Prime

  Implementation using a function with no return type but accepting parameters.
*/

#include <stdio.h>

void check_prime(int);

int main(void)
{
  int num;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  check_prime(num);

  return 0;
}

void check_prime(int num)
{
  int is_prime;

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