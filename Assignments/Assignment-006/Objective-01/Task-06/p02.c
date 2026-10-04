/*
  Write a program to check whether a given character is uppercase or lowercase,
  using a function with no return type but accepting a parameter.
*/

#include <stdio.h>

void check_uppercase_lowercase(int ch);

int main(void)
{
  char ch;

  // Input
  printf("Enter an alphabetic character: ");
  scanf("%c", &ch);
  printf("\n");

  check_uppercase_lowercase(ch);
}

void check_uppercase_lowercase(int ch)
{
  // Logic (Assuming user inputs a valid alphabet character)
  if ((ch >= 'A' && ch <= 'Z'))
    printf("Character '%c' is an uppercase alphabet.\n", ch);
  else
    printf("Character '%c' is a lowercase alphabet.\n", ch);
}