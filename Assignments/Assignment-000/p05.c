#include <stdio.h>

int main(void)
{
  int n1 = 2;
  int n2 = 3;
  int n3 = 5;
  int n4 = 7;
  int n5 = 11;

  float avg = (float)(n1 + n2 + n3 + n4 + n5) / 5;

  printf("Average of %d, %d, %d, %d, %d: %.2f", n1, n2, n3, n4, n5, avg);
  printf("\n");
}