/*
  Sum of numbers in given range.
  Find sum of numbers from start to end.
  Input: start = 1, end = 5
  Output: 15

  Implementation using a function with no return type but accepting parameters.
*/

#include <stdio.h>

void sum_of_range(int, int);

int main(void)
{
  int start, end;

  // Input
  printf("Enter starting number: ");
  scanf("%d", &start);

  printf("Enter ending number: ");
  scanf("%d", &end);
  printf("\n");

  sum_of_range(start, end);

  return 0;
}

void sum_of_range(int start, int end)
{
  int sum, num;

  // Logic
  sum = 0;
  num = start;
  while (num <= end)
    sum += num++;

  printf("Sum of numbers in range [%d, %d]: %d\n", start, end, sum);
}