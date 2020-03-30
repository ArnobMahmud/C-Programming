/*
  Author : Arnob Mahmud
  Mail : arnob.tech.me @ gmail.com
*/

#include <stdio.h>
#include <conio.h>

int main(void) {

    float a, b, sum, x, y, z;

    printf("Enter the value of a(Fractional Number):\n");
    scanf("%f", &a );

    printf("Enter the value of b(Fractional Number):\n");
    scanf("%f", &b );

    sum = a + b;

    printf("The value of sum is:%f\n", sum);    //////// This output will show the value of sum upto 6 digits after the point(.)/////////////
    printf("The value of sum is:%.2f\n", sum);   ///This time this will show 2 digits after the point(.)//  ///  .2f commands for the 2 digit after point number ///

    printf("Enter the value of a(Fractional Number):\n");
    scanf("%f", &a );

    printf("Enter the value of b(Fractional Number):\n");
    scanf("%f", &b );

    sum = a - b;

    printf("The value of sum is:%f\n", sum);
    printf("The value of sum is:%.2f\n", sum);


    printf("Enter the value of x:\n");
    scanf("%f", &x );


    printf("Enter the value of y:\n");
    scanf("%f", &y );


    z = x * y;

    printf("The value of z is:%f\n", z);
    printf("The value of sum is:%.2f\n", sum);

    printf("Enter the value of x:\n");
    scanf("%f", &x );

    printf("Enter the value of y:\n");
    scanf("%f", &y );

    z = x / y;

    printf("The value of z is:%f\n", z);
    printf("The value of sum is:%.2f\n", sum);

    return 0;{
      
    }

}
