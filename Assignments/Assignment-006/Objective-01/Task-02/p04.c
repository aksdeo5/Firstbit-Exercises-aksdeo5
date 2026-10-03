/*
  Write a program to check given 3 digit number is palindrome or not,
  using a function with both a parameter and return type.
*/

#include <stdio.h>

int is_palindrome(int);

int main(void)
{
  int num;

  // Input
  printf("Enter a 3-digits number: ");
  scanf("%d", &num);
  printf("\n");

  // Logic (Assuming user input a valid 3 digit number)
  int is_num_palindrome = is_palindrome(num);

  if (is_num_palindrome)
    printf("%d is a palindrome number.\n", num);
  else
    printf("%d is not a palindrome number.\n", num);
}

int is_palindrome(int num)
{
  int a, b;

  a = num / 100;
  b = num % 10;

  return a == b;
}
