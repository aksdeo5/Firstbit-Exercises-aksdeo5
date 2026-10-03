/*
  Write a program to check whether a given character is a vowel or consonant,
  using a function with no parameters and no return type.
*/

#include <stdio.h>

void is_vowel(void);

int main(void)
{
  is_vowel();
}

void is_vowel(void)
{
  char ch;

  // Input
  printf("Enter an alphabetic character: ");
  scanf("%c", &ch);
  printf("\n");

  // Logic (Assuming user inputs a valid alphabet character)
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    printf("The character '%c' is a vowel alphabet.\n", ch);
  else
    printf("The character '%c' is a consonant alphabet.\n", ch);
}