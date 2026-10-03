/*
  Print a Floyd’s triangle pattern
  Input: n = 4
  Output:
  1
  2 3
  4 5 6
  7 8 9 10
*/

#include <stdio.h>

int main(void)
{
  int n, i;

  // Input
  n = 4;

  i = 1;
  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= row; col++)
      printf("%d ", i++);

    printf("\n");
  }
}