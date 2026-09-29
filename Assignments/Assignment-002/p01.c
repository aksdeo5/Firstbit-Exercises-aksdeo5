/*
  Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
  desired operations.
*/

#include <stdio.h>

int main(void)
{
  int num1, num2, result;
  char op;

  // Input
  num1 = 5;
  num2 = 6;
  op = '+';

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