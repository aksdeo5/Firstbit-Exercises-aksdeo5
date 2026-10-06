/*
  Print prime numbers in the given range 1 to n.

  Implementation using a function with no return type but accepting parameters.
*/

#include <stdio.h>

void print_primes_in_range(int);

int main(void)
{
  int end;

  // Input
  printf("Enter the end of range: ");
  scanf("%d", &end);
  printf("\n");

  print_primes_in_range(end);

  return 0;
}

void print_primes_in_range(int end)
{
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