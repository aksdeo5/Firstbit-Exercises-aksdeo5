#include <stdio.h>

int main(void)
{
  float temp_cel = 31.0F;

  float temp_fah = temp_cel * 9 / 5 + 32;

  printf("%.2f Celsius = %.2f Fahrenheit", temp_cel, temp_fah);
}