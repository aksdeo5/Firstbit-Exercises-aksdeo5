/*
  Accept a number and check if it is divisible by 3, 5, or both.
  (Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
  both" or” Divisible by None”)

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void check_divisible_by_3_5_both(void);

int main(void)
{
  check_divisible_by_3_5_both();
}

void check_divisible_by_3_5_both(void)
{
  int num;

  // Input
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("\n");

  // Logic
  if (num % 3 == 0)
    if (num % 5 == 0)
      printf("%d is divisible by both.\n", num);
    else
      printf("%d is divisible by 3 but not by 5.\n", num);
  else if (num % 5 == 0)
    printf("%d is divisible by 5 but not by 3.\n", num);
  else
    printf("%d is divisible by None.\n", num);
}