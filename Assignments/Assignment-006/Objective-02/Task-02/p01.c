/*
  Accept three sides of a triangle from the user and determine whether the triangle is
  equilateral, isosceles, or scalene.

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void check_triangle(void);

int main(void)
{
  check_triangle();
}

void check_triangle(void)
{
  int s1, s2, s3;

  // Input
  printf("Enter length of the first side: ");
  scanf("%d", &s1);

  printf("Enter length of the second side: ");
  scanf("%d", &s2);

  printf("Enter length of the third side: ");
  scanf("%d", &s3);
  printf("\n");

  // Logic (Assuming user inputs all valid values)
  if (s1 == s2 && s2 == s3)
    printf("The triangle with sides %d, %d, %d is equilateral.\n", s1, s2, s3);
  else if (s1 != s2 && s2 != s3 && s3 != s1)
    printf("The triangle with sides %d, %d, %d is scalene.\n", s1, s2, s3);
  else
    printf("The triangle with sides %d, %d, %d is isosceles.\n", s1, s2, s3);
}