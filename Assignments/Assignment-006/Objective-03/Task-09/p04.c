/*
  Check the given number is Palindrome number or not.
  Input: n = 121
  Output: Palindrome

  Implementation using a function with both parameters and return type.
*/

#include <stdio.h>

int is_palindrome(int);

int main(void)
{
  int num;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  if (is_palindrome(num))
    printf("%d is a palindrome number.\n", num);
  else
    printf("%d is not a palindrome number.\n", num);

  return 0;
}

int is_palindrome(int num)
{
  int rev_num, n;

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