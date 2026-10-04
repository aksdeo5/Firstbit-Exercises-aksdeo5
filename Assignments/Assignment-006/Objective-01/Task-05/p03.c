/*
  Write a program to check whether a person is eligible to vote (age ≥ 18),
  using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_age_check_eligible(void);

int main(void)
{
  int is_eligible = prompt_age_check_eligible();

  if (is_eligible)
    printf("The person with input age is eligible to vote.\n");
  else
    printf("The person with input age is not eligible to vote.\n");
}

int prompt_age_check_eligible(void)
{
  int age;

  // Input
  printf("Enter person's age: ");
  scanf("%d", &age);
  printf("\n");

  // Logic (Assuming user inputs a valid age)
  return age >= 18;
}