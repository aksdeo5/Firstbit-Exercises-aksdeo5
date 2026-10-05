/*
  Sum of numbers in given range.
  Find sum of numbers from start to end.
  Input: start = 1, end = 5
  Output: 15

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void sum_of_range(void);

int main(void)
{
  sum_of_range();

  return 0;
}

void sum_of_range(void)
{
  int start, end, sum, num;

  // Input
  printf("Enter starting number: ");
  scanf("%d", &start);

  printf("Enter ending number: ");
  scanf("%d", &end);
  printf("\n");

  // Logic
  sum = 0;
  num = start;
  while (num <= end)
    sum += num++;

  printf("Sum of numbers in range [%d, %d]: %d\n", start, end, sum);
}