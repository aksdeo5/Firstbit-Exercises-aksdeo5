/*
  Accept a number and check if it is divisible by 3, 5, or both.
  (Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
  both" or” Divisible by None”)

  Implementation using a function with no return type but accepting parameters.
*/

#include <stdio.h>

void check_divisible_by_3_5_both(int);

int main(void)
{
  int num;

  // Input
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("\n");

  check_divisible_by_3_5_both(num);
}

void check_divisible_by_3_5_both(int num)
{
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