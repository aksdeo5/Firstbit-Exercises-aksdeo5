/*
  Check the given number is Palindrome number or not.
  Input: n = 121
  Output: Palindrome

  Implementation using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_num_check_palindrome(void);

int main(void)
{
  int is_palindrome;

  is_palindrome = prompt_num_check_palindrome();

  if (is_palindrome)
    printf("The input number is a palindrome number.\n");
  else
    printf("The input number is not a palindrome number.\n");

  return 0;
}

int prompt_num_check_palindrome(void)
{
  int num, rev_num, n;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  // Logic
  rev_num = 0;
  n = num;
  while (n)
  {
    int digit = n % 10;
    rev_num = rev_num * 10 + digit;

    n /= 10;
  }

  return rev_num == num;
}