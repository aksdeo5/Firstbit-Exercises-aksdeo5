/*
  Write a program to check whether a given character is uppercase or lowercase,
  using a function with no parameters and no return type.
*/

#include <stdio.h>

void check_uppercase_lowercase(void);

int main(void)
{
  check_uppercase_lowercase();
}

void check_uppercase_lowercase(void)
{
  char ch;

  // Input
  printf("Enter an alphabetic character: ");
  scanf("%c", &ch);
  printf("\n");

  // Logic (Assuming user inputs a valid alphabet character)
  if ((ch >= 'A' && ch <= 'Z'))
    printf("Character '%c' is an uppercase alphabet.\n", ch);
  else
    printf("Character '%c' is a lowercase alphabet.\n", ch);
}