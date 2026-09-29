/*
  Write a program to check whether a person is eligible to vote (age ≥ 18).
*/

#include <stdio.h>

int main(void)
{
  int age;

  // Input
  age = 17;

  // Logic (Assuming user inputs a valid age)
  if (age >= 18)
    printf("The person is %d-years-old so they are eligible to vote.\n", age);
  else
    printf("The person is %d-years-old so they are not eligible to vote.\n", age);
}