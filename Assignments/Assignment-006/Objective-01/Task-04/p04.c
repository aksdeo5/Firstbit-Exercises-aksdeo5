/*
  Write a program to check whether a given character is a vowel or consonant,
  using a function with both parameter and return type.
*/

#include <stdio.h>

int is_vowel(int);

int main(void)
{
  char ch;

  // Input
  printf("Enter an alphabetic character: ");
  scanf("%c", &ch);
  printf("\n");

  int is_ch_vowel = is_vowel(ch);

  if (is_ch_vowel)
    printf("The character '%c' is a vowel alphabet.\n", ch);
  else
    printf("The character '%c' is a consonant alphabet.\n", ch);
}

int is_vowel(int ch)
{
  // Logic (Assuming user inputs a valid alphabet character)
  return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}