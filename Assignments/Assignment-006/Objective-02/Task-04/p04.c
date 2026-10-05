/*
  Ask the user to enter marks.
  Then show the result based on these rules:
  If marks are more than 75 → show "Distinction"
  If marks are more than 65 → show "First Class"
  If marks are more than 55 → show "Second Class"
  If marks are 40 or more → show "Pass Class"
  If marks are less than 40 → show "Fail"

  Implementation using a function with both parameters and return type.
*/

#include <stdio.h>

int get_result(int);

int main(void)
{
  int marks, result_code;

  // Input
  printf("Enter marks: ");
  scanf("%d", &marks);
  printf("\n");

  result_code = get_result(marks);

  if (result_code == 0)
    printf("Marks %d: Distiction\n", marks);
  else if (result_code == 1)
    printf("Marks %d: First Class\n", marks);
  else if (result_code == 2)
    printf("Marks %d: Second Class\n", marks);
  else if (result_code == 3)
    printf("Marks %d: Pass\n", marks);
  else
    printf("Marks %d: Fail\n", marks);
}

/**
 * Returns result codes
 * Distiction: 0
 * First Class: 1
 * Second Class: 2
 * Pass: 3
 * Fail: 4
 */
int get_result(int marks)
{
  // Logic
  if (marks >= 75)
    return 0;
  if (marks >= 65)
    return 1;
  if (marks >= 55)
    return 2;
  if (marks >= 40)
    return 3;

  return 4;
}