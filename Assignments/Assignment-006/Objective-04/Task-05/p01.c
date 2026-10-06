/*
  Write a menu driven program to take a number for user and perform operations as follows.

  Press 1.To check number is even or odd.
  2.To check number is prime or not.
  3.To check number is palindrome or not.
  4.To check number is positive, negative or zero.
  5.To reverse a number.
  6.To find sum of digits.

  Implementation using a function with no parameters and no return type.
*/

#include <stdio.h>

void prompt_num_perform_utils(void);

int main(void)
{
  prompt_num_perform_utils();
}

void prompt_num_perform_utils(void)
{
  int num, choice;

  // Input
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("\n");

  printf("Press 1 to check number is even or odd.\n");
  printf("Press 2 To check number is prime or not.\n");
  printf("Press 3 To check number is palindrome or not.\n");
  printf("Press 4 To check number is positive, negative or zero.\n");
  printf("Press 5 To reverse a number.\n");
  printf("Press 6 To find sum of digits.\n");
  printf("\n");

  printf("Enter your choice: ");
  scanf("%d", &choice);
  printf("\n");

  if (choice == 1)
  {
    if (num % 2 == 0)
      printf("%d is an even number.\n", num);
    else
      printf("%d is an odd number.\n", num);
  }
  else if (choice == 2)
  {
    int is_prime = 1;
    if (num < 2)
      is_prime = 0;
    else
    {
      for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
        {
          is_prime = 0;
          break;
        }
      if (is_prime)
        printf("%d is a prime number.\n", num);
      else
        printf("%d is not a prime number.\n", num);
    }
  }
  else if (choice == 3)
  {
    int rev = 0;
    int n = num;
    while (n)
    {
      int digit = n % 10;
      rev = rev * 10 + digit;
      n /= 10;
    }
    if (rev == num)
      printf("%d is a palindrome number.\n", num);
    else
      printf("%d is not a palindrome number.\n", num);
  }
  else if (choice == 4)
  {
    if (num < 0)
      printf("%d is a negative number.\n", num);
    else if (num > 0)
      printf("%d is a positive number.\n", num);
    else
      printf("The entered number is zero.\n");
  }
  else if (choice == 5)
  {
    int rev = 0;
    int n = num;
    while (n)
    {
      int digit = n % 10;
      rev = rev * 10 + digit;
      n /= 10;
    }
    printf("The reverse of number %d is %d.\n", num, rev);
  }
  else if (choice == 6)
  {
    int sum = 0;
    int n = num;
    while (n)
    {
      int digit = n % 10;
      sum += digit;
      n /= 10;
    }
    printf("The sum of digits of number %d is %d.\n", num, sum);
  }
}