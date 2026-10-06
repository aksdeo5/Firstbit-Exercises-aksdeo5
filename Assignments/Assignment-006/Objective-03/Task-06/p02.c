/*
  Check the given number is Perfect number or not.
  Input: n = 28
  Output: Perfect

  Implementation using a function with no return type but accepting parameters.
*/

#include <stdio.h>

void check_perfect(int);

int main(void)
{
  int num;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  check_perfect(num);

  return 0;
}

void check_perfect(int num)
{
  int sum, i;

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
