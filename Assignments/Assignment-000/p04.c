#include <stdio.h>

int main(void)
{
  int a = 5;
  int b = 6;
  int temp;

  printf("Before swapping: a = %d and b = %d", a, b);
  printf("\n");

  temp = a;
  a = b;
  b = temp;

  printf("After swapping: a = %d and b = %d", a, b);
  printf("\n");
}