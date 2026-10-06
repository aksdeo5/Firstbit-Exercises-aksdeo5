/*
  Print strong numbers in the given range 1 to n.

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void prompt_end_print_strongs_in_range(void);

int main(void)
{
  prompt_end_print_strongs_in_range();
}

void prompt_end_print_strongs_in_range(void)
{
  int end;

  // Input
  printf("Enter the end of range: ");
  scanf("%d", &end);
  printf("\n");

  for (int num = 1; num <= end; num++)
  {
    int n = num;
    int sum = 0;
    while (n)
    {
      int digit = n % 10;

      int fact = 1;
      for (int i = digit; i >= 1; i--)
        fact *= i;

      sum += fact;

      n /= 10;
    }

    if (sum == num)
      printf("%d\n", num);
  }
}