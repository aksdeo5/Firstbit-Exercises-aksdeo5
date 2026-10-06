/*
  Check the given number is Strong number or not.
  Input: n = 145
  Output: Strong

  Note: Strong number (also called a Peterson number) is a number where
  the sum of the factorials of its individual digits equals the number itself.
  First few strong numbers: 1, 2, 145, 40585

  Implementation using a function with both parameters and return type.
*/

#include <stdio.h>

int is_strong(int);

int main(void)
{
  int num;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  if (is_strong(num))
    printf("%d is a strong number.\n", num);
  else
    printf("%d is not a strong number.\n", num);

  return 0;
}

int is_strong(int num)
{
  int sum, n;

  // Logic
  sum = 0;
  n = num;
  while (n)
  {
    int digit = n % 10;
    int fact = 1;

    int i = digit;
    while (i)
      fact *= i--;

    sum += fact;

    n /= 10;
  }

  return sum == num;
}