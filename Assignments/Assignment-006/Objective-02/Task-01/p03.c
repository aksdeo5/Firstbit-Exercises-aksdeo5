/*
  Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
  desired operations.

  Implementation using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_input_perform_arithmetic();

int main(void)
{
  int result;

  result = prompt_input_perform_arithmetic();

  printf("Result: %d\n", result);
}

int prompt_input_perform_arithmetic()
{
  int num1, num2;
  char op;

  // Input
  printf("Enter first number: ");
  scanf("%d", &num1);

  printf("Enter second number: ");
  scanf("%d", &num2);

  printf("Enter operator: ");
  scanf(" %c", &op);
  printf("\n");

  // Logic (Assuming user inputs all valid values)
  if (op == '+')
    return num1 + num2;
  if (op == '-')
    return num1 - num2;
  if (op == '*')
    return num1 * num2;
  if (op == '/')
    return num1 / num2;
  if (op == '%')
    return num1 % num2;
}