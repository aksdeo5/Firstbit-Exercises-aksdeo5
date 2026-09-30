/*
  Accept the price from user. Ask the user if he is a student (user may say y or n). If he
  is a student and he has purchased more than 500 than discount is 20% otherwise
  discount is 10%.But if he is not a student then if he has purchased more than 600
  discount is 15% otherwise there is not discount.
*/

#include <stdio.h>

int main(void)
{
  int is_stud;
  double purchase_price, discount;

  // Input
  purchase_price = 555.0;
  is_stud = 1;

  // Logic
  if (is_stud)
    if (purchase_price > 500.0)
      discount = purchase_price * 0.2;
    else
      discount = purchase_price * 0.1;
  else if (purchase_price > 600.0)
    discount = purchase_price * 0.15;
  else
    discount = 0.0;

  // Output
  printf("Purchase Price: %.2lf\n", purchase_price);

  if (is_stud)
    printf("Is student?: Yes\n");
  else
    printf("Is student?: No\n");

  printf("Applicable Discount: %.2lf\n", discount);
  printf("Final Price: %.2lf\n", purchase_price - discount);
}