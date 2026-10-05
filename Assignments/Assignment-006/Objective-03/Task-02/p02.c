/*
  Print table for given number.
  Input: n = 5
  Output: 5 10 15 20 25 30 35 40 45 50

  Implementation using a function with no return type but accepting parameters.
*/

#include <stdio.h>

void print_table(int);

int main(void)
{
  int n;

  // Input
  printf("Enter the number: ");
  scanf("%d", &n);
  printf("\n");

  print_table(n);

  return 0;
}

void print_table(int n)
{
  int m;

  // Logic
  m = 1;
  while (m <= 10)
    printf("%d\t", n * m++);
  printf("\n");
}