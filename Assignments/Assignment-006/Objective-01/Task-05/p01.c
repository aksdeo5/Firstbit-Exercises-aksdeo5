/*
  Write a program to check whether a person is eligible to vote (age ≥ 18),
  using a function with no parameters and no return type.
*/

#include <stdio.h>

void check_eligible(void);

int main(void)
{
  check_eligible();
}

void check_eligible(void)
{
  int age;

  // Input
  printf("Enter person's age: ");
  scanf("%d", &age);
  printf("\n");

  // Logic (Assuming user inputs a valid age)
  if (age >= 18)
    printf("The person is %d-years-old so they are eligible to vote.\n", age);
  else
    printf("The person is %d-years-old so they are not eligible to vote.\n", age);
}