/*
  Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
  desired operations.

  Implementation using a function with no return type but accepting parameters.
*/

#include <stdio.h>

int perform_arithmetic(int, int, char);

int main(void)
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

  result = perform_arithmetic(num1, num2, op);

  printf("%d %c %d = %d\n", num1, op, num2, result);
}

int perform_arithmetic(int num1, int num2, char op)
{

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