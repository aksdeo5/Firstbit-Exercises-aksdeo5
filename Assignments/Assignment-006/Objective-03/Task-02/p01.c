/*
  Print table for given number.
  Input: n = 5
  Output: 5 10 15 20 25 30 35 40 45 50

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void print_table(void);

int main(void)
{
  print_table();

  return 0;
}

void print_table(void)
{
  int n, m;

  // Input
  printf("Enter the number: ");
  scanf("%d", &n);
  printf("\n");

  // Logic
  m = 1;
  while (m <= 10)
    printf("%d\t", n * m++);
  printf("\n");
}