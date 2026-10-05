/*
  Print numbers from 1 to 10.

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void print_1_to_10(void);

int main(void)
{
  print_1_to_10();
}

void print_1_to_10(void)
{
  int num = 1;

  while (num <= 10)
    printf("%d\n", num++);

  return 0;
}