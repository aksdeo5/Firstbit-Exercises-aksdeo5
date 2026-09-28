#include <stdio.h>

int main(void)
{
  int base, height;
  float area;

  // Input
  base = 5;
  height = 6;

  // Logic
  area = 0.5f * base * height;

  printf("Area of traingle with base %d and height %d: %.2f", base, height, area);
  printf("\n");
}