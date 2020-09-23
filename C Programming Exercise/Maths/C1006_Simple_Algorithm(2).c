/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me @ gmail.com
*/


#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{ 

   float h, b, area;

   printf("Enter the value of base:");
   scanf("%f", &b);


   printf("Enter the value of height:");
   scanf("%f", &h);


   area = .5 * b * h;

  printf("The area of triangle is:%.2f", area);
  
  return 0;

}
