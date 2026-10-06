/*
  Print prime numbers in the given range 1 to n.

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void prompt_end_print_primes_in_range(void);

int main(void)
{
  prompt_end_print_primes_in_range();

  return 0;
}

void prompt_end_print_primes_in_range(void)
{
  int end;

  // Input
  printf("Enter the end of range: ");
  scanf("%d", &end);
  printf("\n");

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