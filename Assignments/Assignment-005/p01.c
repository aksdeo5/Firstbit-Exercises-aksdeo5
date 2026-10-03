/*
  Print a solid square pattern
  Input: n = 4
  Output:

  * * * *
  * * * *
  * * * *
  * * * *
*/

#include <stdio.h>

int main(void)
{
  int n;

  // Input
  n = 4;

  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n; col++)
      printf("* ");

    printf("\n");
  }
}