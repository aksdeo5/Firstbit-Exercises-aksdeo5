/*
  Check the given number is prime or not.
  Input: n = 7
  Output: Prime

  Implementation using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_num_check_prime(void);

int main(void)
{
  int is_num_prime;

  is_num_prime = prompt_num_check_prime();

  if (is_num_prime)
    printf("The input number is prime.\n");
  else
    printf("The input number is not prime.\n");

  return 0;
}

int prompt_num_check_prime(void)
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

  return is_prime;
}