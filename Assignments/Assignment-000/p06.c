#include <stdio.h>

int main(void)
{
  int num, sqr, cube;

  // Input
  num = 5;

  sqr = num * num;
  cube = num * num * num;

  printf("Square of %d: %d", num, sqr);
  printf("\n");

  printf("Cube of %d: %d", num, cube);
  printf("\n");
}