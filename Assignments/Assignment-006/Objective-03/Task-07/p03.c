/*
  Find factorial of given number.
  Input: n = 5
  Output: 120

  Implementation using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_num_get_factorial(void);

int main(void)
{
  int fact;

  fact = prompt_num_get_factorial();

  printf("Factorial of input number: %d\n", fact);

  return 0;
}

int prompt_num_get_factorial(void)
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

  return fact;
}