/*
  Accept the age and check if the person is:
  Child (age <= 12),Teenager (13–19),Adult (20–59),Senior (60 and above)
*/

#include <stdio.h>

int main(void)
{
  int age;

  // Input
  age = 33;

  // Logic
  if (age <= 12)
    printf("%d year old person is a child.\n", age);
  else if (age <= 19)
    printf("%d year old person is a teenager.\n", age);
  else if (age <= 60)
    printf("%d year old person is an adult.\n", age);
  else
    printf("%d year old person is a senior.\n", age);
}