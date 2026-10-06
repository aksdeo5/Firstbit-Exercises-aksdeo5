/*
  Print strong numbers in the given range 1 to n.

  Implementation using a function with no return type but accepting parameters.
*/

#include <stdio.h>

void print_strongs_in_range(int);

int main(void)
{
  int end;

  // Input
  printf("Enter the end of range: ");
  scanf("%d", &end);
  printf("\n");

  print_strongs_in_range(end);
}

void print_strongs_in_range(int end)
{
  for (int num = 1; num <= end; num++)
  {
    int n = num;
    int sum = 0;
    while (n)
    {
      int digit = n % 10;

      int fact = 1;
      for (int i = digit; i >= 1; i--)
        fact *= i;

      sum += fact;

      n /= 10;
    }

    if (sum == num)
      printf("%d\n", num);
  }
}