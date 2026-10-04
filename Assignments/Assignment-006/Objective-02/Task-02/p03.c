/*
  Accept three sides of a triangle from the user and determine whether the triangle is
  equilateral, isosceles, or scalene.

  Implementation using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_sides_check_triangle(void);

int main(void)
{
  int triangle_code = prompt_sides_check_triangle();

  if (triangle_code == 0)
    printf("The triangle with provided side lengths is equilateral.\n");
  else if (triangle_code == 1)
    printf("The triangle with provided side lengths is isosceles.\n");
  else
    printf("The triangle with provided side lengths is scalene.\n");
}

/**
 * Returns 0 if the triangle is equilateral.
 * Returns 1 if the triangle is isosceles.
 * Returns 2 if the triangle is scalene.
 */
int prompt_sides_check_triangle(void)
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
    return 0;

  if (s1 != s2 && s2 != s3 && s3 != s1)
    return 1;

  return 2;
}