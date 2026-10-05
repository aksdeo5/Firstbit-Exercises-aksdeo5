/*
  Sum of numbers in given range.
  Find sum of numbers from start to end.
  Input: start = 1, end = 5
  Output: 15

  Implementation using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_range_get_sum();

int main(void)
{
  int sum;

  sum = prompt_range_get_sum();

  printf("Sum of numbers in input range: %d\n", sum);

  return 0;
}

int prompt_range_get_sum()
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

  return sum;
}