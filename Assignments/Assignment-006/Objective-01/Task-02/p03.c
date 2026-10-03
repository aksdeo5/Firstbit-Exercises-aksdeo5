/*
  Write a program to check given 3 digit number is palindrome or not,
  using a function with no parameters but return type.
*/

#include <stdio.h>

int prompt_num_check_palindrome(void);

int main(void)
{
  int is_palindrome = prompt_num_check_palindrome();

  if (is_palindrome)
    printf("The input number is palindrome.\n");
  else
    printf("The input number is not palindrome.\n");
}

int prompt_num_check_palindrome(void)
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

  return a == b;
}
