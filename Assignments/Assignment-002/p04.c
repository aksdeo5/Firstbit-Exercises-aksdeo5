/*
  Ask the user to enter marks.
  Then show the result based on these rules:
  If marks are more than 75 → show "Distinction"
  If marks are more than 65 → show "First Class"
  If marks are more than 55 → show "Second Class"
  If marks are 40 or more → show "Pass Class"
  If marks are less than 40 → show "Fail"
*/

#include <stdio.h>

int main(void)
{
  int marks;

  // Input
  marks = 97;

  // Logic
  if (marks >= 75)
    printf("Marks %d: Distiction\n", marks);
  else if (marks >= 65)
    printf("Marks %d: First Class\n", marks);
  else if (marks >= 55)
    printf("Marks %d: Second Class\n", marks);
  else if (marks >= 40)
    printf("Marks %d: Pass\n", marks);
  else
    printf("Marks %d: Fail\n", marks);
}