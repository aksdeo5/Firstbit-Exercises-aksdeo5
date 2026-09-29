/*
  Write a program to check given 3 digit number is palindrome or not.
*/

#include <stdio.h>

int main(void)
{
  int num;
  int a, b;

  // Input
  num = 141;

  // Logic (Assuming user input a valid 3 digit number)
  a = num / 100;
  b = num % 10;

  if (a == b)
    printf("%d is palindrome\n", num);
  else
    printf("%d is not palindrome\n", num);
}