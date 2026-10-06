/*
  Check the given number is Strong number or not.
  Input: n = 145
  Output: Strong

  Note: Strong number (also called a Peterson number) is a number where
  the sum of the factorials of its individual digits equals the number itself.
  First few strong numbers: 1, 2, 145, 40585

  Implementation using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_num_check_strong(void);

int main(void)
{
  int is_strong;

  is_strong = prompt_num_check_strong();

  if (is_strong)
    printf("The input number is a strong number.\n");
  else
    printf("The input number is not a strong number.\n");

  return 0;
}

int prompt_num_check_strong(void)
{
  int num, sum, n;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

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