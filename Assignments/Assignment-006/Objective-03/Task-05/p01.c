/*
  Check the given number is Armstrong number or not.
  Input: n = 153
  Output: Armstrong

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void check_armstrong(void);

int main(void)
{
  check_armstrong();

  return 0;
}

void check_armstrong(void)
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

  if (sum == num)
    printf("%d is an Armstrong number.\n", num);
  else
    printf("%d is not an Armstrong number.\n", num);
}