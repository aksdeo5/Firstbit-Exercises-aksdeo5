/*
  Write a program to check whether a person is eligible to vote (age ≥ 18),
  using a function with both parameter and return type.
*/

#include <stdio.h>

int is_eligible(int);

int main(void)
{
  int age;

  // Input
  printf("Enter person's age: ");
  scanf("%d", &age);
  printf("\n");

  int is_age_eligible = is_eligible(age);

  if (is_age_eligible)
    printf("The person is %d-years-old so they are eligible to vote.\n", age);
  else
    printf("The person is %d-years-old so they are not eligible to vote.\n", age);
}

int is_eligible(int age)
{
  // Logic (Assuming user inputs a valid age)
  return age >= 18;
}