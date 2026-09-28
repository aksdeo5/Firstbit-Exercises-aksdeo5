#include <stdio.h>

int main(void)
{
  int input_minutes, hours, minutes;

  // Input
  input_minutes = 153;

  hours = input_minutes / 60;
  minutes = input_minutes % 60;

  printf("%d minutes = %d hours and %d minutes", input_minutes, hours, minutes);
  printf("\n");
}