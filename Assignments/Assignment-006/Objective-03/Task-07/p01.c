/*
  Find factorial of given number.
  Input: n = 5
  Output: 120

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void find_factorial(void);

int main(void)
{
  find_factorial();

  return 0;
}

void find_factorial(void)
{
  int num, fact, i;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  // Logic
  fact = 1;
  i = num;
  while (i)
    fact *= i--;

  printf("Factorial of %d: %d\n", num, fact);
}