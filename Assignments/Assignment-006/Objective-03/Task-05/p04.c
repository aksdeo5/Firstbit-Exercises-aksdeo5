/*
  Check the given number is Armstrong number or not.
  Input: n = 153
  Output: Armstrong

  Implementation using a function with both parameters and return type.
*/

#include <stdio.h>

int is_armstrong(int);

int main(void)
{
  int num;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  if (is_armstrong(num))
    printf("%d is an Armstrong number.\n", num);
  else
    printf("%d is not an Armstrong number.\n", num);

  return 0;
}

int is_armstrong(int num)
{
  int sum, count, n;

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