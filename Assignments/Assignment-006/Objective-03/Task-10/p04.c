/*
  Find Sum of first and last digit of given number.
  Input: n = 12345
  Output: 6 (1 + 5)

  Implementation using a function with both parameters and return type.
*/

#include <stdio.h>

int get_sum_first_last_digit(int);

int main(void)
{
  int num, sum;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  sum = get_sum_first_last_digit(num);

  printf("The sum of the first and the last digit of %d is %d.\n", num, sum);

  return 0;
}

int get_sum_first_last_digit(int num)
{
  int sum, n;

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

  return sum;
}