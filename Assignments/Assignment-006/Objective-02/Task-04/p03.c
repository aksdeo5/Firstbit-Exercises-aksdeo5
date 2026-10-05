/*
  Ask the user to enter marks.
  Then show the result based on these rules:
  If marks are more than 75 → show "Distinction"
  If marks are more than 65 → show "First Class"
  If marks are more than 55 → show "Second Class"
  If marks are 40 or more → show "Pass Class"
  If marks are less than 40 → show "Fail"

  Implementation using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_marks_get_result(void);

int main(void)
{
  int result_code;

  result_code = prompt_marks_get_result();

  if (result_code == 0)
    printf("Result: Distiction\n");
  else if (result_code == 1)
    printf("Result: First Class\n");
  else if (result_code == 2)
    printf("Result: Second Class\n");
  else if (result_code == 3)
    printf("Result: Pass\n");
  else
    printf("Result: Fail\n");
}

/**
 * Returns result codes
 * Distiction: 0
 * First Class: 1
 * Second Class: 2
 * Pass: 3
 * Fail: 4
 */
int prompt_marks_get_result(void)
{
  int marks;

  // Input
  printf("Enter marks: ");
  scanf("%d", &marks);
  printf("\n");

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