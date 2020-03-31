/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[]) {

  /* a1x + b1y + c1 = 0
     a2x + b2y + c2 = 0

    > (x ,y) = solve */

   int a1, a2, c1, c2;
   int b1, b2, m ,n, k;
   float x, y;

   printf("a1 = ?\n");
   scanf("%d", &a1);

   printf("b1 = ?\n");
   scanf("%d", &b1);

   printf("c1 = ?\n");
   scanf("%d", &c1);

   printf("a2 = ?\n");
   scanf("%d", &a2);

   printf("b2 = ?\n");
   scanf("%d", &b2);

   printf("c2 = ?\n");
   scanf("%d", &c2);

   if ( a1 == a2 && b1 == b2) {
     printf("These lines are parallel.\n");
   }
   else {
   m = (b1*c2 - b2*c1);
   n = (c1*a2 - c2*a1);
   k = (a1*b2 - a2*b1);

   x = m / k;
   y = n / k;

   printf("The value of 'x' is :%.2f\n", x);
   printf("The value of 'y' is :%.2f\n", y);
   }

  getch();
  return 0;

}
