/*
      Author : Arnob Mahmud

      Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  double a, b, c, discrimant, realPart, imagPart;
  double  root1, root2;

  printf("Enter the co-efficients a, b & c : \n" );
  scanf("%lf %lf %lf", &a, &b, &c);

  discrimant = b * b - (4 * a * c);

  if ( discrimant > 0) {
     root1 = (-b + sqrt(discrimant)) / (2 * a);
     root2 = (-b - sqrt(discrimant)) / (2 * a);
     printf("root1 = %.2lf\n", root1);
     printf("root2 = %.2lf\n", root2);
  }
  else if ( discrimant == 0) {
    root1 = root2 = -b / ( 2* a);
    printf("root1 = root2 = %.2lf\n", root1);
  }
  else {
    realPart = - b / ( 2 * a);
    imagPart = sqrt(-discrimant)/ ( 2 * a);
    printf("root1 = %.2f+%.2fi\n", realPart, imagPart);
    printf("root2 = %.2f-%.2fi\n", realPart, imagPart);
  }

  return 0;

}
