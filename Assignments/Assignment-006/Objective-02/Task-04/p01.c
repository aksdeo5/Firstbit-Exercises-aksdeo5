/*
  Ask the user to enter marks.
  Then show the result based on these rules:
  If marks are more than 75 → show "Distinction"
  If marks are more than 65 → show "First Class"
  If marks are more than 55 → show "Second Class"
  If marks are 40 or more → show "Pass Class"
  If marks are less than 40 → show "Fail"

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void show_result(void);

int main(void)
{
  show_result();
}

void show_result(void)
{
  int marks;

  // Input
  printf("Enter marks: ");
  scanf("%d", &marks);
  printf("\n");

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