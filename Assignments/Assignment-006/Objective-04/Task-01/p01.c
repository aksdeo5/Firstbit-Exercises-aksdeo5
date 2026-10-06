/*
  Print armstrong numbers in the given range 1 to n.

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void prompt_end_print_armstrongs_in_range(void);

int main(void)
{
  prompt_end_print_armstrongs_in_range();

  return 0;
}

void prompt_end_print_armstrongs_in_range(void)
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

    int digits_count = 0;
    int n = num;
    while (n)
    {
      digits_count++;
      n /= 10;
    }

    n = num;
    while (n)
    {
      int digit = n % 10;

      int digit_pow_count = 1;
      for (int i = 1; i <= digits_count; i++)
        digit_pow_count *= digit;

      sum += digit_pow_count;

      n /= 10;
    }

    if (sum == num)
      printf("%d\n", num);
  }
}