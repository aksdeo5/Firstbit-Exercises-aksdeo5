/*
  Accept three sides of a triangle from the user and determine whether the triangle is
  equilateral, isosceles, or scalene.

  Implementation using a function with both parameters and return type.
*/

#include <stdio.h>

int get_triangle_code(int, int, int);

int main(void)
{
  int s1, s2, s3, triangle_code;

  // Input
  printf("Enter length of the first side: ");
  scanf("%d", &s1);

  printf("Enter length of the second side: ");
  scanf("%d", &s2);

  printf("Enter length of the third side: ");
  scanf("%d", &s3);
  printf("\n");

  triangle_code = get_triangle_code(s1, s2, s3);

  if (triangle_code == 0)
    printf("The triangle with sides %d, %d, %d is equilateral.\n", s1, s2, s3);
  else if (triangle_code == 1)
    printf("The triangle with sides %d, %d, %d is scalene.\n", s1, s2, s3);
  else
    printf("The triangle with sides %d, %d, %d is isosceles.\n", s1, s2, s3);
}

/**
 * Returns 0 if the triangle is equilateral.
 * Returns 1 if the triangle is isosceles.
 * Returns 2 if the triangle is scalene.
 */
int get_triangle_code(int s1, int s2, int s3)
{

  // Logic (Assuming user inputs all valid values)
  if (s1 == s2 && s2 == s3)
    return 0;

  if (s1 != s2 && s2 != s3 && s3 != s1)
    return 1;

  return 2;
}