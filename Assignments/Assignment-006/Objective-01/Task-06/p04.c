/*
  Write a program to check whether a given character is uppercase or lowercase,
  using a function with both parameter and return type.
*/

#include <stdio.h>

int is_uppercase(int);

int main(void)
{
  char ch;

  // Input
  printf("Enter an alphabetic character: ");
  scanf("%c", &ch);
  printf("\n");

  int is_char_uppercase = is_uppercase(ch);

  if (is_char_uppercase)
    printf("Character '%c' is an uppercase alphabet.\n", ch);
  else
    printf("Character '%c' is a lowercase alphabet.\n", ch);
}

int is_uppercase(int ch)
{
  // Logic (Assuming user inputs a valid alphabet character)
  return ch >= 'A' && ch <= 'Z';
}