/*
  Print table for given number.
  Input: n = 5
  Output: 5 10 15 20 25 30 35 40 45 50
*/

#include <stdio.h>

int main(void)
{
  int n, m;

  // Input
  n = 5;

  // Logic
  m = 1;
  while (m <= 10)
    printf("%d\t", n * m++);
  printf("\n");

  return 0;
}