/*
  Accept the price from user. Ask the user if he is a student (user may say y or n). If he
  is a student and he has purchased more than 500 than discount is 20% otherwise
  discount is 10%.But if he is not a student then if he has purchased more than 600
  discount is 15% otherwise there is not discount.

  Implementation using a function with both parameters and return type.
*/

#include <stdio.h>

double get_discount(double, int);

int main(void)
{
  double purchase_price, discount;
  int is_stud;

  // Input
  printf("Enter purchase price: ");
  scanf("%lf", &purchase_price);

  printf("Is student?(1 for yes, 0 for no): ");
  scanf("%d", &is_stud);
  printf("\n");

  discount = get_discount(purchase_price, is_stud);

  // Output
  printf("Purchase Price: %.2lf\n", purchase_price);

  if (is_stud)
    printf("Is student?: Yes\n");
  else
    printf("Is student?: No\n");

  printf("Applicable Discount: %.2lf\n", discount);
  printf("Final Price: %.2lf\n", purchase_price - discount);
}

double get_discount(double purchase_price, int is_stud)
{
  // Logic
  if (is_stud)
  {
    if (purchase_price > 500.0)
      return purchase_price * 0.2;

    return purchase_price * 0.1;
  }

  if (purchase_price > 600.0)
    return purchase_price * 0.15;

  return 0.0;
}