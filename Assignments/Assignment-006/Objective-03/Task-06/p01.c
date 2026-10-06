/*
  Check the given number is Perfect number or not.
  Input: n = 28
  Output: Perfect

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void check_perfect(void);

int main(void)
{
  check_perfect();

  return 0;
}

void check_perfect(void)
{
  int num, sum, i;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  // Logic
  sum = 0;
  i = 1;
  while (i <= num / 2)
  {
    if (num % i == 0)
      sum += i;

    i++;
  }

  if (sum == num)
    printf("%d is a perfect number.\n", num);
  else
    printf("%d is not a perfect number.\n", num);
}
