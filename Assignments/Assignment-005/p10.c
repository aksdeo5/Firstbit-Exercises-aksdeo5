/*
  Print a hollow square with diagonal pattern
  Input: n = 5
  Output:

  * * * * *
  * *     *
  *   *   *
  *     * *
  * * * * *
*/

#include <stdio.h>

int main(void)
{
  int n;

  // Input
  n = 5;

  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= n; col++)
      if (row == 1 || row == n || col == 1 || col == n || col == row)
        printf("* ");
      else
        printf("  ");

    printf("\n");
  }
}