/*
  Check the given number is Palindrome number or not.
  Input: n = 121
  Output: Palindrome

  Implementation using a function with no return type but accepting parameters.
*/

#include <stdio.h>

void check_palindrome(int);

int main(void)
{
  int num;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  check_palindrome(num);

  return 0;
}

void check_palindrome(int num)
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

  if (rev_num == num)
    printf("%d is a palindrome number.\n", num);
  else
    printf("%d is not a palindrome number.\n", num);
}