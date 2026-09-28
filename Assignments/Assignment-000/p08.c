#include <stdio.h>

int main(void)
{
  int length, width, perimeter;

  // Input
  length = 5;
  width = 6;

  // Logic
  perimeter = 2 * length + 2 * width;

  printf("Perimeter of rectangle with length %d and width %d: %d", length, width, perimeter);
  printf("\n");
}