/*
  Write a program to check whether a number is even or odd.
*/

#include <stdio.h>

int main(void)
{
  int num;

  // Input
  num = 5;

  // Logic
  if (num % 2 == 0)
    printf("%d is even\n", num);
  else
    printf("%d is odd\n", num);
}