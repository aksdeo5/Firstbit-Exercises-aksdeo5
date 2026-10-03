/*
  Print a half pyramid using numbers
  Input: n = 5
  Output:
  1
  12
  123
  1234
  12345
*/

#include <stdio.h>

int main(void)
{
  int n;

  // Input
  n = 5;

  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= row; col++)
      printf("%d", col);

    printf("\n");
  }
}