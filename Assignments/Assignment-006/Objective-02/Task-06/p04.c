/*
  Accept a number and check if it is divisible by 3, 5, or both.
  (Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
  both" or” Divisible by None”)

  Implementation using a function with both parameters and return type.
*/

#include <stdio.h>

int divisible_by_3_5_both(int);

int main(void)
{
  int num, divisibility_code;

  // Input
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("\n");

  divisibility_code = divisible_by_3_5_both(num);

  if (divisibility_code == 0)
    printf("%d is divisible by both 3 and 5.\n", num);
  else if (divisibility_code == 1)
    printf("%d is divisible by 3 but not by 5.\n", num);
  else if (divisibility_code == 2)
    printf("%d is divisible by 5 but not by 3.\n", num);
  else
    printf("%d is divisible by neither 3 nor 5.\n", num);
}

/**
 * Returns divisibility codes
 * Divisible by both: 0
 * Divisible by 3: 1
 * Divisible by 5: 2
 * Divisible by neither: -1
 */
int divisible_by_3_5_both(int num)
{
  // Logic
  if (num % 3 == 0)
  {
    if (num % 5 == 0)
      return 0;

    return 1;
  }
  if (num % 5 == 0)
    return 2;

  return -1;
}