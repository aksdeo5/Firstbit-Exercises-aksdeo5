/*
  Sum of numbers in given range.
  Find sum of numbers from start to end.
  Input: start = 1, end = 5
  Output: 15

  Implementation using a function with both parameters and return type.
*/

#include <stdio.h>

int get_sum_of_range(int, int);

int main(void)
{
  int start, end, sum;

  // Input
  printf("Enter starting number: ");
  scanf("%d", &start);

  printf("Enter ending number: ");
  scanf("%d", &end);
  printf("\n");

  sum = get_sum_of_range(start, end);

  printf("Sum of numbers in range [%d, %d]: %d\n", start, end, sum);

  return 0;
}

int get_sum_of_range(int start, int end)
{
  int sum, num;

  // Logic
  sum = 0;
  num = start;
  while (num <= end)
    sum += num++;

  return sum;
}