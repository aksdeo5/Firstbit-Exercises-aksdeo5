/*
  Check the given number is Armstrong number or not.
  Input: n = 153
  Output: Armstrong

  Implementation using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_num_check_armstrong(void);

int main(void)
{
  int is_num_armstrong;

  is_num_armstrong = prompt_num_check_armstrong();

  if (is_num_armstrong)
    printf("The input number is an Armstrong number.\n");
  else
    printf("The input number is not an Armstrong number.\n");

  return 0;
}

int prompt_num_check_armstrong(void)
{
  int num, sum, count, n;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  // Logic
  count = 0;
  n = num;
  while (n)
  {
    count++;
    n /= 10;
  }

  sum = 0;
  n = num;
  while (n)
  {
    int digit = n % 10;
    int digit_pow_count = 1;
    int i = 1;
    while (i <= count)
    {
      digit_pow_count *= digit;
      i++;
    }

    sum += digit_pow_count;

    n /= 10;
  }

  return sum == num;
}