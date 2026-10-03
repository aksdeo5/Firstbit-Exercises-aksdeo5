/*
  Write a program to check whether a number is even or odd,
  using a function with no parameters and no return type.
*/

#include <stdio.h>

void check_even_odd(void);

int main(void)
{
  check_even_odd();
}

void check_even_odd(void)
{
  int num;

  // Input
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("\n");

  // Logic
  if (num % 2 == 0)
    printf("%d is an even number.\n", num);
  else
    printf("%d is an odd number.\n", num);
}
