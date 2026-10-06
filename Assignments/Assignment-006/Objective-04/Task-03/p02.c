/*
  Print perfect numbers in the given range 1 to n.

  Implementation using a function with no return type but accepting parameters.
*/

#include <stdio.h>

void print_perfects_in_range(int);

int main(void)
{
  int end;

  // Input
  printf("Enter the end of range: ");
  scanf("%d", &end);
  printf("\n");

  print_perfects_in_range(end);

  return 0;
}

void print_perfects_in_range(int end)
{
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