/*
  Write a program to check given 3 digit number is palindrome or not,
  using a function with no parameters and no return type.
*/

#include <stdio.h>

void check_palindrome(void);

int main(void)
{
  check_palindrome();
}

void check_palindrome(void)
{
  int num;
  int a, b;

  // Input
  printf("Enter a 3-digits number: ");
  scanf("%d", &num);
  printf("\n");

  // Logic (Assuming user input a valid 3 digit number)
  a = num / 100;
  b = num % 10;

  if (a == b)
    printf("%d is a palindrome number.\n", num);
  else
    printf("%d is not a palindrome number.\n", num);
}
