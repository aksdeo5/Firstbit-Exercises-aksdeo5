/*
  Check the given number is prime or not.
  Input: n = 7
  Output: Prime

  Implementation using a function with both parameters and return type.
*/

#include <stdio.h>

int is_prime(int);

int main(void)
{
  int num;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  if (is_prime(num))
    printf("%d is a prime number.\n", num);
  else
    printf("%d is not a prime number.\n", num);

  return 0;
}

int is_prime(int num)
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

  return is_prime;
}