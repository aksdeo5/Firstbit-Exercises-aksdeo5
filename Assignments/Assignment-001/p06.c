/*
  Write a program to check whether a given character is uppercase or lowercase.
*/

#include <stdio.h>

int main(void)
{
  char ch;

  // Input
  ch = 'a';

  // Logic (Assuming user inputs a valid alphabet character)
  if ((ch >= 'A' && ch <= 'Z'))
    printf("'%c' is an uppercase alphabet.\n", ch);
  else
    printf("'%c' is a lowercase alphabet.\n", ch);
}