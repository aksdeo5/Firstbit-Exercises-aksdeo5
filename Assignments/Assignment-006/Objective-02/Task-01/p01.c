/*
  Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
  desired operations.

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void perform_arithmetic(void);

int main(void)
{
  perform_arithmetic();
}

void perform_arithmetic(void)
{
  int num1, num2, result;
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
    result = num1 + num2;
  else if (op == '-')
    result = num1 - num2;
  else if (op == '*')
    result = num1 * num2;
  else if (op == '/')
    result = num1 / num2;
  else if (op == '%')
    result = num1 % num2;

  printf("%d %c %d = %d\n", num1, op, num2, result);
}