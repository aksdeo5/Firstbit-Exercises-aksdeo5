/*
  Check the given number is Perfect number or not.
  Input: n = 28
  Output: Perfect

  Implementation using a function with both parameters and return type.
*/

#include <stdio.h>

int is_perfect(int);

int main(void)
{
  int num;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  if (is_perfect(num))
    printf("%d is a perfect number.\n", num);
  else
    printf("%d is not a perfect number.\n", num);

  return 0;
}

int is_perfect(int num)
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

  return sum == num;
}
