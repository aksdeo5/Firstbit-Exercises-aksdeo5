/*
  Check the given number is Palindrome number or not.
  Input: n = 121
  Output: Palindrome

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void check_palindrome(void);

int main(void)
{
  check_palindrome();

  return 0;
}

void check_palindrome(void)
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

  if (rev_num == num)
    printf("%d is a palindrome number.\n", num);
  else
    printf("%d is not a palindrome number.\n", num);
}