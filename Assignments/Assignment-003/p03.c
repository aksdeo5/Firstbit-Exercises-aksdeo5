/*
  Sum of numbers in given range.
  Find sum of numbers from start to end.
  Input: start = 1, end = 5
  Output: 15
*/

#include <stdio.h>

int main(void)
{
  int start, end, sum = 0, num;

  // Input
  start = 1;
  end = 5;

  // Logic
  num = start;
  while (num <= end)
    sum += num++;

  printf("Sum of numbers in range [%d, %d]: %d\n", start, end, sum);

  return 0;
}