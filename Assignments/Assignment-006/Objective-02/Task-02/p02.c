/*
  Accept three sides of a triangle from the user and determine whether the triangle is
  equilateral, isosceles, or scalene.

  Implementation using a function with no return type but accepting parameters.
*/

#include <stdio.h>

void check_triangle(int, int, int);

int main(void)
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

  check_triangle(s1, s2, s3);
}

void check_triangle(int s1, int s2, int s3)
{

  // Logic (Assuming user inputs all valid values)
  if (s1 == s2 && s2 == s3)
    printf("The triangle with sides %d, %d, %d is equilateral.\n", s1, s2, s3);
  else if (s1 != s2 && s2 != s3 && s3 != s1)
    printf("The triangle with sides %d, %d, %d is scalene.\n", s1, s2, s3);
  else
    printf("The triangle with sides %d, %d, %d is isosceles.\n", s1, s2, s3);
}