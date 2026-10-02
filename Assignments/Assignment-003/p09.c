/*
  Check the given number is Palindrome number or not.
  Input: n = 121
  Output: Palindrome
*/

#include <stdio.h>

int main(void)
{
  int num, rev_num, n;

  // Input
  num = 121;

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

  return 0;
}