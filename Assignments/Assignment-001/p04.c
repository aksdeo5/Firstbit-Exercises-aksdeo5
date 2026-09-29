/*
  Write a program to check whether a given character is a vowel or consonant.
*/

#include <stdio.h>

int main(void)
{
  char ch;

  // Input
  ch = 'a';

  // Logic (Assuming user inputs a valid alphabet character)
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    printf("'%c' is a vowel\n", ch);
  else
    printf("'%c' is a consonant\n", ch);
}