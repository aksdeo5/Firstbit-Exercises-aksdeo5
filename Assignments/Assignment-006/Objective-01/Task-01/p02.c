/*
  Write a program to check whether a number is even or odd,
  using a function with no return type but accepting a parameter.
*/

#include <stdio.h>

void check_even_odd(int);

int main(void)
{
  int num;

  // Input
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("\n");

  check_even_odd(num);
}

void check_even_odd(int num)
{
  if (num % 2 == 0)
    printf("%d is an even number.\n", num);
  else
    printf("%d is an odd number.\n", num);
}
