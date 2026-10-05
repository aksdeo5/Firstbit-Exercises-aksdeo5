/*
  Accept the age and check if the person is:
  Child (age <= 12),Teenager (13–19),Adult (20–59),Senior (60 and above)

  Implementation using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_age_check_group(void);

int main(void)
{
  int age_group_code;

  age_group_code = prompt_age_check_group();

  if (age_group_code == 0)
    printf("The person with input age is a child.\n");
  else if (age_group_code == 1)
    printf("The person with input age is a teenager.\n");
  else if (age_group_code == 2)
    printf("The person with input age is an adult.\n");
  else
    printf("The person with input age is a senior.\n");
}

/**
 * Returns age group code
 * Child: 0
 * Teenager: 1
 * Adult: 2
 * Senior: 3
 */
int prompt_age_check_group(void)
{
  int age;

  // Input
  printf("Enter age of the person: ");
  scanf("%d", &age);
  printf("\n");

  // Logic
  if (age <= 12)
    return 0;
  if (age <= 19)
    return 1;
  if (age <= 60)
    return 2;

  return 3;
}
