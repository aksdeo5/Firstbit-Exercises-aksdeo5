/*
  Print an inverted right-angled triangle pattern
  Input: n = 5
  Output:

  *****
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
  n = 5;

  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n - row; col++)
      printf("* ");

    printf("\n");
  }
}