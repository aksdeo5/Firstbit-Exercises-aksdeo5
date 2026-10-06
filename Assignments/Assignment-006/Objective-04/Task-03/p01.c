/*
  Print perfect numbers in the given range 1 to n.

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void prompt_end_print_perfects_in_range(void);

int main(void)
{
  prompt_end_print_perfects_in_range();

  return 0;
}

void prompt_end_print_perfects_in_range(void)
{
  int end;

  // Input
  printf("Enter the end of range: ");
  scanf("%d", &end);
  printf("\n");

  // Logic
  for (int num = 1; num <= end; num++)
  {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
      if (num % i == 0)
        sum += i;

    if (sum == num)
      printf("%d\n", num);
  }
}