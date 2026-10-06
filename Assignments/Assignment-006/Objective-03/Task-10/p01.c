/*
  Find Sum of first and last digit of given number.
  Input: n = 12345
  Output: 6 (1 + 5)

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void sum_first_last_digit(void);

int main(void)
{
  sum_first_last_digit();

  return 0;
}

void sum_first_last_digit(void)
{
  int num, sum, n;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  // Logic
  sum = 0;
  n = num;
  while (n)
  {
    int digit = n % 10;

    if (n == num || n / 10 == 0)
      sum += digit;

    n /= 10;
  }

  printf("The sum of the first and the last digit of %d is %d.\n", num, sum);
}