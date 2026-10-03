/*
  Write a program to check whether a number is even or odd,
  using a function with both parameter and return type.
*/

#include <stdio.h>

int is_odd(int);

int main(void)
{
  int num;

  // Input
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("\n");

  int is_num_odd = is_odd(num);
  if (is_num_odd)
    printf("%d is an odd number.\n", num);
  else
    printf("%d is an even number.\n", num);
}

int is_odd(int num)
{
  if (num % 2 == 0)
    return 0;

  return 1;
}
