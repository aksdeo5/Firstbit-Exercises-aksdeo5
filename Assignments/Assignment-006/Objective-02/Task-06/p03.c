/*
  Accept a number and check if it is divisible by 3, 5, or both.
  (Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
  both" or” Divisible by None”)

  Implementation using a function with no parameter but return type.
*/

#include <stdio.h>

int divisible_by_3_5_both(void);

int main(void)
{
  int divisibility_code;

  divisibility_code = divisible_by_3_5_both();

  if (divisibility_code == 0)
    printf("The input number is divisible by both 3 and 5.\n");
  else if (divisibility_code == 1)
    printf("The input number is divisible by 3 but not by 5.\n");
  else if (divisibility_code == 2)
    printf("The input number is divisible by 5 but not by 3.\n");
  else
    printf("The input number is divisible by neither 3 nor 5.\n");
}

/**
 * Returns divisibility codes
 * Divisible by both: 0
 * Divisible by 3: 1
 * Divisible by 5: 2
 * Divisible by neither: -1
 */
int divisible_by_3_5_both(void)
{
  int num;

  // Input
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("\n");

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