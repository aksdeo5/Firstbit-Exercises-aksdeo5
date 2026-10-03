/*
  Write a program to check given 3 digit number is palindrome or not,
  using a function with both a parameter and return type.
*/

#include <stdio.h>

int prompt_num_check_palindrome(int);

int main(void)
{
  int num;

  // Input
  printf("Enter a 3-digits number: ");
  scanf("%d", &num);
  printf("\n");

  // Logic (Assuming user input a valid 3 digit number)
  int is_palindrome = prompt_num_check_palindrome(num);

  if (is_palindrome)
    printf("%d is a palindrome number.\n", num);
  else
    printf("%d is not a palindrome number.\n", num);
}

int prompt_num_check_palindrome(int num)
{
  int a, b;

  a = num / 100;
  b = num % 10;

  return a == b;
}
