/*
  Accept the age and check if the person is:
  Child (age <= 12),Teenager (13–19),Adult (20–59),Senior (60 and above)

  Implementation using a function with both parameters and return type.
*/

#include <stdio.h>

int get_age_group(int);

int main(void)
{
  int age, age_group_code;

  // Input
  printf("Enter age of the person: ");
  scanf("%d", &age);
  printf("\n");

  age_group_code = get_age_group(age);

  if (age_group_code == 0)
    printf("%d year old person is a child.\n", age);
  else if (age_group_code == 1)
    printf("%d year old person is a teenager.\n", age);
  else if (age_group_code == 2)
    printf("%d year old person is an adult.\n", age);
  else
    printf("%d year old person is a senior.\n", age);
}

/**
 * Returns age group code
 * Child: 0
 * Teenager: 1
 * Adult: 2
 * Senior: 3
 */
int get_age_group(int age)
{
  // Logic
  if (age <= 12)
    return 0;
  if (age <= 19)
    return 1;
  if (age <= 60)
    return 2;

  return 3;
}
