/*
  Find factorial of given number.
  Input: n = 5
  Output: 120

  Implementation using a function with no return type but accepting parameters.
*/

#include <stdio.h>

void find_factorial(int);

int main(void)
{
  int num;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  find_factorial(num);

  return 0;
}

void find_factorial(int num)
{
  int fact, i;

  // Logic
  fact = 1;
  i = num;
  while (i)
    fact *= i--;

  printf("Factorial of %d: %d\n", num, fact);
}