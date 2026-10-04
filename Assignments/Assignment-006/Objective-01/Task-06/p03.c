/*
  Write a program to check whether a given character is uppercase or lowercase,
  using a function with no parameter but return type.
*/

#include <stdio.h>

int prompt_char_check_uppercase(void);

int main(void)
{
  int is_uppercase = prompt_char_check_uppercase();

  if (is_uppercase)
    printf("The input character is an uppercase alphabet.\n");
  else
    printf("The input character is a lowercase alphabet.\n");
}

int prompt_char_check_uppercase(void)
{
  char ch;

  // Input
  printf("Enter an alphabetic character: ");
  scanf("%c", &ch);
  printf("\n");

  // Logic (Assuming user inputs a valid alphabet character)
  return ch >= 'A' && ch <= 'Z';
}