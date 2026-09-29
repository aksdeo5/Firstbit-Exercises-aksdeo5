#include <stdio.h>

int main(void)
{
  int sub1, sub2, sub3, sub4, sub5;
  int total;
  float percentage;

  // Input
  sub1 = 97;
  sub2 = 89;
  sub3 = 83;
  sub4 = 79;
  sub5 = 71;

  // Logic
  total = sub1 + sub2 + sub3 + sub4 + sub5;
  percentage = (float)total / 500 * 100;

  printf("Marks: %d, %d, %d, %d, %d", sub1, sub2, sub3, sub4, sub5);
  printf("\n");

  printf("Total: %d", total);
  printf("\n");

  printf("Percentage: %.2f", percentage);
  printf("\n");
}