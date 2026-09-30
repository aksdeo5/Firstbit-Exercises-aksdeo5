/*
  Print numbers from 1 to 10
*/

#include <stdio.h>

int main(void)
{
  int num = 1;

  while (num <= 10)
    printf("%d\n", num++);

  return 0;
}