/*
  Find factorial of given number.
  Input: n = 5
  Output: 120

  Implementation using a function with both parameters and return type.
*/

#include <stdio.h>

int get_factorial(int);

int main(void)
{
  int num, fact;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  fact = get_factorial(num);

  printf("Factorial of %d: %d\n", num, fact);

  return 0;
}

int get_factorial(int num)
{
  int fact, i;

  // Logic
  fact = 1;
  i = num;
  while (i)
    fact *= i--;

  return fact;
}