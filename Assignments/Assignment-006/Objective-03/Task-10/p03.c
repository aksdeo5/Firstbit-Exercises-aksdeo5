/*
  Find Sum of first and last digit of given number.
  Input: n = 12345
  Output: 6 (1 + 5)

  Implementation using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_num_get_sum_first_last_digit(void);

int main(void)
{
  int sum;

  sum = prompt_num_get_sum_first_last_digit();

  printf("The sum of the first and the last digit of the input number is %d.\n", sum);

  return 0;
}

int prompt_num_get_sum_first_last_digit(void)
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

  return sum;
}