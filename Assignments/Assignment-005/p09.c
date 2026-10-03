/*
  Print a hollow square pattern
  Input: n = 4
  Output:

  * * * *
  *     *
  *     *
  * * * *
*/

#include <stdio.h>

int main(void)
{
  int n;

  // Input
  n = 4;

  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= n; col++)
      if (row == 1 || row == n || col == 1 || col == n)
        printf("* ");
      else
        printf("  ");

    printf("\n");
  }
}