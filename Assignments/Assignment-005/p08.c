/*
  Print a pattern of stars in diamond shape
  Input: n = 4
  Output:

  *
  **
  ***
  ****
  ***
  **
  *
*/

#include <stdio.h>

int main(void)
{
  int n;

  // Input
  n = 4;

  for (int row = 1; row <= n * 2 - 1; row++)
  {
    if (row <= n)
      for (int col = 1; col <= row; col++)
        printf("*");
    else
      for (int col = 1; col <= n + (n - row); col++)
        printf("*");

    printf("\n");
  }
}