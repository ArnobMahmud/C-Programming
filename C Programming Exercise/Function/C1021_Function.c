/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <conio.h>

 double avg(double a, double b){

 return (a + b) / 2;
}

int main(int argc, char const *argv[])
{
  double x, y, z;

  printf("Enter 3 numbers :\n");
  scanf("%lf %lf %lf", &x, &y, &z);

  printf("Average of %g and %g :%g\n", x, y, avg(x,y));
  printf("Average of %g and %g :%g\n", y, z, avg(y,z));
  printf("Average of %g and %g :%g\n", z, x, avg(z,x));

  getch();
  return 0;

}
