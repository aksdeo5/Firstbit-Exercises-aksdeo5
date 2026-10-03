/*
  Write a program to check whether a number is even or odd,
  using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_num_check_odd(void);

int main(void)
{
  int is_odd = prompt_num_check_odd();

  if (is_odd)
    printf("The input number is odd.\n");
  else
    printf("The input number is even.\n");
}

int prompt_num_check_odd(void)
{
  int num;

  // Input
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("\n");

  return num % 2 != 0;
}
