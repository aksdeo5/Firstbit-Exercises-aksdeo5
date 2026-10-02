/*
  Print strong numbers in the given range 1 to n.
*/

#include <stdio.h>

int main(void)
{
  int end;

  // Input
  end = 100000;

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