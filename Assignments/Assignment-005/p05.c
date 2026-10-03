/*
  Print an inverted pyramid pattern
  Input: n = 5
  Output:

  *********
   *******
    *****
     ***
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
    for (int col = 0; col < n * 2 - (row + 1); col++)
      if (col < row)
        printf(" ");
      else
        printf("*");

    printf("\n");
  }
}