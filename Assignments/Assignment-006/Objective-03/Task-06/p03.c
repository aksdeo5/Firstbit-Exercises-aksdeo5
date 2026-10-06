/*
  Check the given number is Perfect number or not.
  Input: n = 28
  Output: Perfect

  Implementation using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_num_check_perfect(void);

int main(void)
{
  int is_perfect;

  is_perfect = prompt_num_check_perfect();

  if (is_perfect)
    printf("The input number is a perfect number.\n");
  else
    printf("The input number is not a perfect number.\n");

  return 0;
}

int prompt_num_check_perfect(void)
{
  int num, sum, i;

  // Input
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");

  // Logic
  sum = 0;
  i = 1;
  while (i <= num / 2)
  {
    if (num % i == 0)
      sum += i;

    i++;
  }

  return sum == num;
}
