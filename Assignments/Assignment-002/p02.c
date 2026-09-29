/*
  Accept three sides of a triangle from the user and determine whether the triangle is
  equilateral, isosceles, or scalene.
*/

#include <stdio.h>

int main(void)
{
  int s1, s2, s3;

  // Input
  s1 = 5;
  s2 = 6;
  s3 = 8;

  // Logic (Assuming user inputs all valid values)
  if (s1 == s2 && s2 == s3)
    printf("The triangle with sides %d, %d, %d is equilateral.\n", s1, s2, s3);
  else if (s1 != s2 && s2 != s3 && s3 != s1)
    printf("The triangle with sides %d, %d, %d is scalene.\n", s1, s2, s3);
  else
    printf("The triangle with sides %d, %d, %d is isosceles.\n", s1, s2, s3);
}