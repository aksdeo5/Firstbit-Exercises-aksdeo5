/*
  Print perfect numbers in the given range 1 to n.
*/

#include <stdio.h>

int main(void)
{
  int end;

  // Input
  end = 10000;

  // Logic
  for (int num = 1; num <= end; num++)
  {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
      if (num % i == 0)
        sum += i;

    if (sum == num)
      printf("%d\n", num);
  }
}