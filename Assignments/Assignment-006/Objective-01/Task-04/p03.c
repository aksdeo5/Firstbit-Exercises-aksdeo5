/*
  Write a program to check whether a given character is a vowel or consonant,
  using a function with no parameter but return type.
*/

#include <stdio.h>

int is_vowel(void);

int main(void)
{
  int is_vowel = is_vowel();

  if (is_vowel)
    printf("The input character is a vowel alphabet.\n");
  else
    printf("The input character is a consonant alphabet.\n");
}

int is_vowel(void)
{
  char ch;

  // Input
  printf("Enter an alphabetic character: ");
  scanf("%c", &ch);
  printf("\n");

  // Logic (Assuming user inputs a valid alphabet character)
  return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}